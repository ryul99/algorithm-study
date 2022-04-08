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
//https://www.acmicpc.net/problem/11651
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int n;
    vector<pair<int, int> > v;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(y, x));
    }
    sort(v.begin(), v.end());
    for (auto e : v) {
        printf("%d %d\n", e.second, e.first);
    }
    return 0;
}
