#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//11052
int main(int argc, char const *argv[]) {
    int N, M = 0;
    scanf("%d", &N);
    int dp[N];
    for(int i = 0; i < N; i++){
        int in, ma = 0;
        scanf("%d", &in);
        for(int j = 0; j < i; j++){
            ma = max(ma, dp[j] + dp[i - j - 1]);
        }
        dp[i] = max(ma, in);
        M = max(M, dp[i]);
    }
    printf("%d", M);
    return 0;
}
