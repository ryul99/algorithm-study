#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;
//14754
int arr[1010];
int main(int argc, char const *argv[]) {
  int N, M;
  long long sol = 0;
  scanf("%d %d", &N, &M);
  for(int i = 0; i < N; i++){
    int ma = 0;
    for(int j = 0; j < M; j++){
      int inn;
      scanf("%d", &inn);
      sol += inn;
      ma = max(ma, inn);
      arr[j] = max(arr[j], inn);
    }
    sol -= ma;
  }

	return 0;
}
