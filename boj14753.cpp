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
//14753
int main(int argc, char const *argv[]) {
	int N, posN = 0;
	vector<int> pos;
	vector<int> neg;
	scanf("%d", &N);

	for(int i = 0; i < N; i++) {
		int a;
		scanf("%d", &a);
		pos.push_back(a);
		neg.push_back(a);
		if( a > 0)
			posN++;
	}

  sort(pos.begin(), pos.end(), greater<int>());
  sort(neg.begin(), neg.end());

  // printf("%d %d %d %d\n", pos[0], pos[1], pos[2], posN);
	if(posN > 2)
		printf("%d", max((neg[0] * neg[1] * pos[0]), (pos[0] * pos[1] * pos[2])));
	else if(posN > 1)
		printf("%d", max((neg[0] * neg[1] * pos[0]), (pos[0] * pos[1])));
  else if(posN > 0)
    printf("%d", (neg[0] * neg[1] * pos[0]));
  else
    printf("%d", max((neg[0] * neg[1]), (pos[0] * pos[1])));
	return 0;
}
