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
//https://www.acmicpc.net/problem/14501

int dp[20];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, max_p = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        int t, p;
        scanf("%d %d", &t, &p);
        if (i + t <= N) {
            dp[i + t] = max(dp[i + t], dp[i] + p);
        }
        dp[i + 1] = max(dp[i + 1], dp[i]);
    }
    for (int i = 0; i <= N; ++i)
        max_p = max(max_p, dp[i]);
    printf("%d\n", max_p);
    return 0;
}
