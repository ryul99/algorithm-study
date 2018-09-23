#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
using namespace std;
//2293
int main(int argc, char const *argv[]) {
    int n, k;
    scanf("%d %d", &n, &k);
    priority_queue<int, vector<int>, greater<int> > nIn;
    int dp[k+1];
    for(int i = 0; i <= k; i++){
        dp[i] = 0;
    }
    for(int i = 0; i < n; i++){
        int in;
        scanf("%d", &in);
        nIn.push(in);
    }
    for(int i = 1; i <= k; i++){
        int a = 0;
        if(!nIn.empty() && nIn.top() == i) {
            a = 1;
            nIn.pop();
        }
        for(int j = 1; j < i/2; j++){
            dp[i] += (dp[j] + dp[i - j]);
        }
        if(i % 2 == 1)
            dp[i] += (dp[i/2] + dp[i - i/2]);
        dp[i] += a;
        printf("%d\n", dp[i]);
    }
    printf("%d", dp[k]);
    return 0;
}
