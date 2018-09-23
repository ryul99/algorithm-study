#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
//1010
int dp[40][40];//n combination m
int main(int argc, char const *argv[]) {
  int T,n,m,out,N;
  scanf("%d\n", &T);
  for(;T>0;T--){
    for(int i = 0; i < 40; i++){
      for(int j = 0; j < 40; j++)
        dp[i][j] = -1;
    }
    out = 1;
    N = 1;
    scanf("%d %d", &n, &m);
    // for(int i = n;i>0;i--){
    //   out *= m;
    //   m--;
    // }
    // for(int i = n; i > 0; i--){
    //   N *= i;
    // }
    for(int i = 0; i <= m; i++){
      for(int j = 0; j <= i ; j++){
        if(dp[i][j] == -1){
          if(j == 0 || i == j)
            dp[i][j] = 1;
          else{
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
          }
        }
      }
    }
    printf("%d\n", dp[m][n]);
    // printf("%d %d\n", out, N );
    // printf("%d\n", out/N);
  }
  return 0;
}
