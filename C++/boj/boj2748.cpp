#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
long long dp[2];

using namespace std;
//2748
int main(int argc, char const *argv[]) {
    int N;
    int a = 0;
    dp[0] = 0;
    dp[1] = 1;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        a = !a;
        dp[a] = dp[a] + dp[!a];
    }
    printf("%lld", dp[a]);
    return 0;
}
