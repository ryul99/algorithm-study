#include <cstring>
#include <string>
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

using namespace std;
//https://www.acmicpc.net/problem/1904

int dp[1000100];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    int n;
    scanf("%d", &n);
    for (int i = 3; i <= n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }
    printf("%d\n", dp[n]);
    return 0;
}
