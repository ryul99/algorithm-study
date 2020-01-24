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

#define INF 4000000

using namespace std;
//https://www.acmicpc.net/problem/1753
int main(int argc, char const *argv[]) {
    int V, E, K;
    scanf("%d %d", &V, &E);
    scanf("%d", &K);
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    vector<vector<pair<int, int> > > adj(V + 1);
    vector<int> weightSum(V + 1, INF);
    vector<int> visited(V + 1, INF);
    for(int i = 0; i < E; ++i){
        int u,v,w;
        scanf("%d %d %d", &u, &v, &w);
        adj[u].emplace_back(w, v);
    }
    pq.emplace(0, K);
    while(!pq.empty()){
        int tw = pq.top().first;
        int v = pq.top().second;
        pq.pop();
        if(visited[v] == INF){
            visited[v] = tw;
            for(auto p: adj[v]){
                int nw = p.first;
                int n = p.second;
                if((tw + nw) < weightSum[n]){
                    pq.emplace(tw + nw, n);
                    weightSum[n] = tw + nw;
                }
            }
        }
    }
    for(int i = 1; i <= V; ++i){
        int w = visited[i];
        if(w == INF)
            printf("INF\n");
        else
            printf("%d\n", w);
    }
    return 0;
}