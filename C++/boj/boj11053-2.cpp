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

int dp[1010]; //dp[i]: max length when i is end of LIS

using namespace std;
//https://www.acmicpc.net/problem/11053
int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    for(int t = 0; t < N; t++){
        int n;
        scanf("%d", &n);
        int mx = 0;
        for(int i = 0; i < n; i++)
            mx = max(dp[i], mx);
        dp[n] = mx + 1;
    }
    int mx = 0;
    for(int i = 0; i < 1010; i++){
        mx = max(mx, dp[i]);
    }
    printf("%d\n", mx);
    return 0;
}