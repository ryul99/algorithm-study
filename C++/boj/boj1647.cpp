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
// https://boj.kr/1647

#define MV 100100
#define ME 1000100

int uni[MV];

int find(int s) {
    if (uni[s] < 0)
        return s;
    return uni[s] = find(uni[s]);
}

void union_f(int a, int b) {
    int ar = find(a);
    int br = find(b);
    if (ar == br)
        return;
    if (uni[ar] < uni[br]) {
        uni[br] = ar;
    } else if (uni[br] < uni[ar]) {
        uni[ar] = br;
    } else {
        uni[br] = ar;
        uni[ar] -= 1;
    }
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int V, E, w = 0, lastW = -1;
    vector<pair<int, pair<int, int> > > v;
    for (int i = 0; i < MV; ++i) {
        uni[i] = -1;
    }
    scanf("%d %d", &V, &E);
    for (int i = 0; i < E; ++i) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        v.push_back(make_pair(c, make_pair(a, b)));
    }
    sort(v.begin(), v.end());
    for (auto e : v) {
        int c = e.first;
        int a = e.second.first;
        int b = e.second.second;
        int ar = find(a);
        int br = find(b);
        if (ar == br)
            continue;
        // printf("node: %d %d %d\n", a, b ,c);
        lastW = c;
        w += c;
        union_f(ar, br);
    }
    printf("%d\n", w - lastW);
    return 0;
}
