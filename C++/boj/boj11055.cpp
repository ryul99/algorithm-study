#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//11055
int dp[1050];
int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    int in[n];
    int re = 0;
    for(int i = 0; i < n; ++i){
        scanf("%d", &in[i]);
        int ma = 0;
        int q = -1;
        for(int j = 0; j < i; ++j){
            if(in[i] > in[j]){
                ma = max(dp[j], ma);
                q = j;
            }
        }
        if(q == -1)
            dp[i] = in[i];
        else
            dp[i] = ma + in[i];
        re = max(re, dp[i]);
    }
    printf("%d", re);
    return 0;
}
