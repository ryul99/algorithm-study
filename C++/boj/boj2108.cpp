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
//https://www.acmicpc.net/problem/2108

int arr[500500];
int cnt[8010];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, sum = 0, mi = 5000, ma = -5000, most = -1, most_cnt = -1, most_same_cnt = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        mi = min(mi, arr[i]);
        ma = max(ma, arr[i]);
        cnt[4000 + arr[i]]++;
    }
    for (int i = 0; i < 8010; ++i) {
        if (most_cnt < cnt[i]) {
            most_same_cnt = 1;
            most_cnt = cnt[i];
            most = i - 4000;
        } else if (most_cnt == cnt[i]) {
            most_same_cnt++;
            if (most_same_cnt == 2) {
                most = i - 4000;
            }
        }
    }
    sort(&arr[0], &arr[N]);
    int mean = round((float) sum / N) ;
    printf("%d\n%d\n%d\n%d\n", mean, arr[N / 2], most, ma - mi);
    return 0;
}
