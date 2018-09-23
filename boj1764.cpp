#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//1764
int main(int argc, char const *argv[]) {
  set<string> N;
  set<string> M;
  int n, m;
  string input;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n ; i++) {
    cin >> input;
    N.insert(input);
  }
  for(int i = 0; i < m ; i++) {
    cin >> input;
    if (N.find(input) != N.end())
        M.insert(input);
  }
  printf("%d\n", M.size());
  for(auto v : M)
    cout << v << endl;
  return 0;
}
