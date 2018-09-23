#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//2167
int main(int argc, char const *argv[]) {
    int n, m, i, j, x, y, in;
    int dp[330][330];
    scanf("%d %d", &n, &m);
    for(int p = 0; p <= n; p++){
        for(int q = 0; q <= m; q++){
            if(p == 0 || q == 0)
                dp[p][q] = 0;
            else{
                scanf("%d", &in);
                dp[p][q] = dp[p-1][q] - dp[p-1][q-1] + dp[p][q-1] + in;
            }
        }
    }

    int tc;
    scanf("%d", &tc);
    for(int k = 0; k < tc; k++){
        scanf("%d %d %d %d", &i, &j, &x, &y);
        printf("%d", dp[x][y] - dp[i-1][y] + dp[i-1][j-1] - dp[x][j-1]);
    }
    return 0;
}
