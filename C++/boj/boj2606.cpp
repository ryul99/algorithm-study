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
//https://www.acmicpc.net/problem/2606
int main(int argc, char const *argv[]) {
    int num_computer;
    int num_connect;
    scanf("%d", &num_computer);
    scanf("%d", &num_connect);
    vector<bool> isVisited(110, false);
    vector<vector<int> > connect(110, vector<int>());
    queue<int> q;
    for (int i = 0; i < num_connect; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        connect[a].push_back(b);
        connect[b].push_back(a);
    }
    int num_infested = 0;
    q.push(1);
    isVisited[1] = true;
    while (!q.empty()) {
        int front = q.front();
        q.pop();
        for (int connectedNode : connect[front]) {
            if (!isVisited[connectedNode]) {
                q.push(connectedNode);
                isVisited[connectedNode] = true;
                num_infested++;
            }
        }
    }
    printf("%d\n", num_infested);
    return 0;
}