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
// boj.kr/1197

#define NU 1001000
#define MN 10010
#define ME 100100

bool visited[MN];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int V, E;
    int a, b, c;
    long long w = 0;
    vector<vector<pair<int, int> > > edge(MN);
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    scanf("%d %d", &V, &E);
    for (int i = 0; i < E; ++i) {
        scanf("%d %d %d", &a, &b, &c);
        edge[a].push_back(make_pair(c, b));
        edge[b].push_back(make_pair(c, a));
    }

    pq.push(make_pair(0, a));
    while (! pq.empty()) {
        auto top = pq.top();
        pq.pop();
        c = top.first;
        int node = top.second;
        if (visited[node])
            continue;
        w += c;
        visited[node] = true;
        // printf("%d\n", node);
        for (auto p : edge[node]) {
            c = p.first;
            int n = p.second;
            if (c != NU && (! visited[n]))
                pq.push(make_pair(c, n));
        }
    }
    printf("%lld\n", w);
    return 0;
}
