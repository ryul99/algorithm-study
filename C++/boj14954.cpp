#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
using namespace std;
//14954
int main(int argc, char const *argv[]) {
  int n, temp, tn;
  scanf("%d", &n);
  tn = n;
  temp = (tn%10) * (tn%10);
  while(tn/10){
    tn = tn/10;
    temp += (tn%10) * (tn%10);
  }
  while(temp != 1 && temp != 4){
    tn = temp;
    temp = (tn%10) * (tn%10);
    while(tn/10){
      tn = tn/10;
      temp += (tn%10) * (tn%10);
    }
  }

  if(temp == 1)
    printf("HAPPY");
  else
    printf("UNHAPPY");
  return 0;
}
