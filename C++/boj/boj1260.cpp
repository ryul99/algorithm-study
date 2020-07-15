#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;
//https://www.acmicpc.net/problem/1260
int main(int argc, char const *argv[]) {
    int N, M, V;
    scanf("%d %d %d", &N, &M, &V);  //node, edge, starting node
    vector<vector<int> > graph(1010, vector<int>());
    vector<bool> isVisited(1010, false);
    stack<int> s;
    queue<int> q;
    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 0; i < graph.size(); i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    // for (vector<int> v : graph) {
    //     for (int n : v) {
    //         printf("%d ", n);
    //     }
    //     printf("\n");
    // }
    // DFS
    s.push(V);
    isVisited[V] = true;
    printf("%d ", V);
    while (!s.empty()) {
        bool flag = true;
        int v = s.top();
        // printf("%d\n", int(s.size()));
        for (int in_node : graph[v]) {
            if (!isVisited[in_node]) {
                s.push(in_node);
                isVisited[in_node] = true;
                flag = false;
                printf("%d ", in_node);
                break;
            }
        }
        if (flag) {
            s.pop();
        }
    }
    printf("\n");
    for (int i = 0; i < isVisited.size(); i++)
        isVisited[i] = false;
    // BFS
    q.push(V);
    isVisited[V] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        printf("%d ", v);
        for (int in_node : graph[v]) {
            if (!isVisited[in_node]) {
                q.push(in_node);
                isVisited[in_node] = true;
            }
        }
    }
    printf("\n");

    return 0;
}