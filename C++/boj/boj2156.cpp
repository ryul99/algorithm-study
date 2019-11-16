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

int dp[10100][3]; //dp[i][j]: max value until ith cup, j cups continuously

using namespace std;
//https://www.acmicpc.net/problem/2156
int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    int n;
    scanf("%d", &n);
    dp[0][1] = n;
    for(int i = 1; i < N; i++){
        int n;
        scanf("%d", &n);
        dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
        dp[i][1] = dp[i - 1][0] + n;
        dp[i][2] = dp[i - 1][1] + n;
    }
    printf("%d\n", max(max(dp[N - 1][0], dp[N - 1][1]), dp[N - 1][2]));
    return 0;
}