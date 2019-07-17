#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//11053
int main(int argc, char const *argv[]) {
    int n;
    int a;
    int re = 0;
    int in[1010];
    int dp[1010];
    for(int i = 0; i < 1010; i++){
        in[i] = 0;
    }
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int ma = 0;
        scanf("%d", &a);
        in[i] = a;
        for(int j = 0; j < i; j++){
            if(in[j] < in[i] && ma < dp[j])
                ma = dp[j];
        }
        dp[i] = ma + 1;
        if (re < ma + 1)
            re = ma + 1;
    }
    printf("%d", re);
    return 0;
}
