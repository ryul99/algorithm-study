#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//9461
int main(int argc, char const *argv[]) {
    long long dp[100] = {0,};
    int T;
    scanf("%d", &T);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 2;
    for(int i = 0; i < T; i++){
        int n;
        scanf("%d", &n);
        for(int i = 5; i < n; i++){
            dp[i] = dp[i-1] + dp[i-5];
        }
        printf("%lld\n", dp[n-1]);
    }
    return 0;
}
