#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//1699
int dp[100100];
int main(int argc, char const *argv[]) {
    int N;
    int g = 1;
    scanf("%d", &N);
    for(int i = 1; i <= N; ++i){
        if(i == g*g){
            ++g;
            dp[i] = 1;
            continue;
        }
        int mi = (1<<31) - 1;
        for(int j = 1; j <= i/2; ++j){
            if(mi > dp[j] + dp[i-j])
                mi = dp[j] + dp[i-j];
        }
        dp[i] = mi;
    }
    printf("%d", dp[N]);
    return 0;
}
