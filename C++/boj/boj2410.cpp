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
//https://www.acmicpc.net/problem/2410

long long dp[1000100];

int numSetBits(int n) {
    int num = 0;
    while (n) {
        num += n & 1;
        n = n >> 1;
    }
    return num;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d", &N);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 2;
    for (int i = 4; i <= N; ++i) {
        if (i % 2)
            dp[i] = dp[i - 1];
        else
            dp[i] = dp[i / 2] + dp[i - 1];
        dp[i] %= 1000000000;
    }
    printf("%lld\n", dp[N]);
    return 0;
}
