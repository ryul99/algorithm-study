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
// boj.kr/2630

int m[130][130];
int cnt0;
int cnt1;

int dfs(int i, int j, int r) {
    // printf("lg: %d %d %d\n", i, j, r);
    if (r < 1)
        return m[i][j];
    int res[4];
    for (int ri = 0; ri < 2; ++ri) {
        for (int rj = 0; rj < 2; ++rj) {
            res[2 * ri + rj] = dfs(i + ri * r, j + rj * r, r / 2);
        }
    }
    int sum = res[0] + res[1] + res[2] + res[3];
    if (sum == 4 || sum == 0) {
        return !!sum;
    }
    for (int i = 0; i < 4; ++i) {
        if (res[i] == 0)
            cnt0++;
        if (res[i] == 1)
            cnt1++;
    }
    return 10;
}


int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N;
    scanf("%d", &N);
    for (int i = 0; i < 130; ++i) {
        for (int j = 0; j < 130; ++j) {
            m[i][j] = -1;
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &m[i][j]);
        }
    }
    int res = dfs(0, 0, N/2);
    if (res == 0)
        cnt0++;
    if (res == 1)
        cnt1++;
    printf("%d\n%d\n", cnt0, cnt1);
    return 0;
}
