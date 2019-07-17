#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

int dp[3][100100];
int inn[2][100100];

using namespace std;
//9465
int main(int argc, char const *argv[]) {
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int N;
        scanf("%d", &N);
        for(int j = 0; j < N; j++){
            int a;
            scanf("%d", &a);
            inn[0][j] = a;
        }
        for(int j = 0; j < N; j++){
            int a;
            scanf("%d", &a);
            inn[1][j] = a;
        }
        dp[0][0] = inn[0][0];
        dp[1][0] = inn[1][0];
        for(int j = 1; j < N; j++){
            dp[0][j] = max(dp[1][j-1], dp[2][j-1]) + inn[0][j];
            dp[1][j] = max(dp[0][j-1], dp[2][j-1]) + inn[1][j];
            dp[2][j] = max(max(dp[0][j-1], dp[1][j-1]), dp[2][j-1]);
        }
        printf("%d\n", max(max(dp[0][N-1], dp[1][N-1]), dp[2][N-1]));
    }
    return 0;
}
