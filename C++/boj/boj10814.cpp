#include <cstring>
#include <string>
#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//https://www.acmicpc.net/problem/10814
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    vector<pair<int, char*> > v;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        int n;
        char *s;
        scanf("%d %ms", &n, &s);
        v.push_back(make_pair(n, s));
    }
    // lambda function
    stable_sort(v.begin(), v.end(), [] (pair<int, char*> a, pair<int, char*> b) { return a.first < b.first; });
    for (auto e : v) {
        printf("%d %s\n", e.first, e.second);
    }
    return 0;
}
