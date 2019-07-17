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
//
int main(int argc, char const *argv[]) {
	int n, m, p, q;
	vector<pair<int, int> > st;
	scanf("%d %d", &n, &m);
	scanf("%d %d", &p, &q);
	for(int i = 0; i < n; i++) {
		int qq;
		scanf("%d", &qq);
		pair<int, int> a;
		a.first = qq;
		a.second = 0;
		st.push_back(a);
	}
	for(int i = 0; i < m; i++) {
		int qq;
		scanf("%d", &qq);
		pair<int, int> a;
		a.first = qq;
		a.second = 1;
		st.push_back(a);
	}
	sort(st.begin(), st.end());
	int sm = 1<<31-1;
	int cou = 0;
	pair<int, int> a;
	a.first = st[0].first;
	a.second = st[0].second;
	for(int i = 1; i < st.size(); i++) {
		if(a.second != st[i].second) {
			if(abs(a.first - st[i].first) < sm) {
				sm = abs(a.first - st[i].first);
				cou = 1;
			}
			else if(abs(a.first - st[i].first) == sm) {
				cou++;
			}
		}
		a.first = st[i].first;
		a.second = st[i].second;
	}

  printf("%d %d", sm + abs(p - q), cou);
	return 0;
}
