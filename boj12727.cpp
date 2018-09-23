#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//11727
int main(int argc, char const *argv[]) {
    int dp[1010];
    int n;
    scanf("%d", &n);
    dp[0] = 1;
    dp[1] = 3;
    for(int i = 2; i < n; i++)
        dp[i] = dp[i-1] % 10007 + 2 * dp[i-2] % 10007;
    printf("%d", dp[n-1]%10007);
    return 0;
}
