#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//2747
int dp[50];

int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 50; i++)
        dp[i] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++)
        dp[i] = dp[i-1] + dp[i-2];
    printf("%d", dp[n]);
    return 0;
}
