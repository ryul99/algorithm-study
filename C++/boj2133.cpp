#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//2133
int dp[50];
int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    dp[1] = 0;
    dp[2] = 3;
    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            int a = 3 * dp[i - 2] + 2;
            for(int j = 2; j < i/2; j++)
                a += 2 * dp[i - 2 * j];
            dp[i] = a;
        }
    }
    printf("%d", dp[n]);
    return 0;
}
