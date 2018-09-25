#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
using namespace std;
//2294
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
    for(int i = 0; i < 10010; i++)
      dp[i] = 2123456789;
    dp[0] = 0;
    // dp[0][1] = 1;
    for(int i = 0; i < n; i++){
      int m = nIn.top();
      for(int j = 1; j <= k; j++){
        if(m <= j){
          dp[j] = min(dp[j - m] + 1, dp[j]);
        }
      }
      nIn.pop();
    }
    printf("%d", dp[k] == 2123456789 ? -1 : dp[k]);
    return 0;
}
