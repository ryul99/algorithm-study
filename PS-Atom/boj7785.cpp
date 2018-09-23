#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//7785
int main(int argc, char const *argv[]) {
  int num;
  string name;
  string order;
  set<string> hset;
  stack<string> st;
  scanf("%d", &num);
  for(int i = 0; i < num; i++){
    cin >> name;
    cin >> order;
    if(order == "enter")
      hset.insert(name);
    else if(order == "leave")
      hset.erase(name);
  }
  for(auto v : hset)
    st.push(v);
  while(!st.empty()){
    string s;
    s = st.top();
    cout << s << endl;
    st.pop();
  }
  return 0;
}
