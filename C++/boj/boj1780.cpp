#include <cstring>
#include <string>
#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
// boj.kr/1780

int arr[2222][2222];

int cnt[3];

int dfs(int i, int j, int r) {
    if (r < 1)
        return arr[i][j];
    int tcnt_m = 0, tcnt_0 = 0, tcnt_1 = 0;
    for (int ri = 0; ri < 3; ++ri) {
        for (int rj = 0; rj < 3; ++rj) {
            int res = dfs(i + r * ri, j + r * rj, r / 3);
            if (res == -1)
                tcnt_m++;
            else if (res == 0)
                tcnt_0++;
            else if (res == 1)
                tcnt_1++;
        }
    }
    if (tcnt_m == 9)
        return -1;
    else if (tcnt_0 == 9)
        return 0;
    else if (tcnt_1 == 9)
        return 1;

    cnt[0] += tcnt_m;
    cnt[1] += tcnt_0;
    cnt[2] += tcnt_1;
    return 10;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }
    int res = dfs(0, 0, N / 3);
    switch (res) {
        case -1:
            cnt[0]++;
            break;
        case 0:
            cnt[1]++;
            break;
        case 1:
            cnt[2]++;
            break;
    }
    printf("%d\n%d\n%d\n", cnt[0], cnt[1], cnt[2]);
    return 0;
}
