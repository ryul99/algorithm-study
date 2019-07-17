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
int dp[10010];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    priority_queue<int, vector<int>, greater<int> > nIn;
    for(int i = 0; i < n; i++){
        int in;
        scanf("%d", &in);
        nIn.push(in);
    }
    dp[0] = 1;
    // dp[0][1] = 1;
    for(int i = 0; i < n; i++){
      int m = nIn.top();
      for(int j = 1; j <= k; j++){
        if(m <= j){
          dp[j] = dp[j - m] + dp[j];
        }
      }
      nIn.pop();
    }
    printf("%d", dp[k]);
    return 0;
}
