#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//11051
int dp[1010][1010];

int main(int argc, char const *argv[]) {
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i <= n; i++)
        dp[0][i] = 0;
    for(int i = 1; i <= n; i++){
        dp[i][0] = 1;
        dp[i][1] = i;
        for(int j = 2; j <= i; j++){
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % 10007;
        }
        for(int j = i + 1; j <= n; j++)
            dp[i][j] = 0;
    }
    printf("%d", dp[n][k]);
    return 0;
}
