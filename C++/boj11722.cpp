#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
using namespace std;
//11722
int inA[1010];
int dp[1010];
int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    int inn;
    scanf("%d", &inn);
    int ma = 0;
    for(int j = 0; j < i; j++){
      if(inn < inA[j])
        ma = max(ma, dp[j]);
    }
    dp[i] = ma + 1;
    inA[i] = inn;
  }
  int ma = 0;
  for(int i = 0; i < N; i++)
    ma = max(dp[i], ma);
  printf("%d", ma);
  return 0;
}
