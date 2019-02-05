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
//15017
int main(int argc, char const *argv[]) {
  int N;
  string names[550];
  int firsts[550];
  int seconds[550];
  set<pair<int, int> > sss;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    char a[30];
    float b, c;
    scanf("%s %f %f", a, &b, &c);
    names[i] = string(a);
    firsts[i] = (int) (b * 100);
    seconds[i] = (int) (c * 100);

    sss.insert()
  }

	return 0;
}
