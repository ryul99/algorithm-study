#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//11057
int main(int argc, char const *argv[]) {
    int N;
    int out = 0;
    int dp[1050][15];
    scanf("%d", &N);
    for(int i = 0; i < 10; i++){
        dp[0][i] = 1;
    }
    for(int i = 1; i < N; i++){
        for(int j = 0; j < 10; j++){
            int re = 0;
            for(int p = 0; p <= j ; p++){
                re += dp[i-1][p]%10007;
            }
            dp[i][j] = re%10007;
        }
    }
    for(int i = 0; i < 11; i++){
        out += dp[N-1][i] % 10007;
    }
    printf("%d", out%10007);
    return 0;
}
