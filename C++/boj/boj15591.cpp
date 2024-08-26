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
// boj.kr/15591
int g[5050][5050];
int check[5050];
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N, Q;
    scanf("%d %d", &N, &Q);
    int de = 2123456789;
    vector<vector<int>> rel(5050, vector<int>());
    queue<pair<int, int>> qq;

    for (int i = 0; i < N + 10; ++i) {
        for (int j = 0; j < N + 10; ++j) {
            g[i][j] = de;
        }
    }
    for (int i = 0; i < N - 1; ++i) {
        int a, b, l;
        scanf("%d %d %d", &a, &b, &l);
        g[a][b] = l;
        g[b][a] = l;
        rel[a].push_back(b);
        rel[b].push_back(a);
    }
//    for (int i = 1; i < N + 1; ++i) {
//        for (int j = 1; j < N + 1; ++j) {
//            printf("%d ", g[i][j]);
//        }
//        printf("\n");
//    }
    for (int i = 1; i < N + 1; ++i) {
        qq.push(make_pair(i, de));
        for (int j = 0; j < N + 10; ++j) {
            check[j] = 0;
        }
        while (! qq.empty()) {
            int next = qq.front;
            int dist = qq.second;
            qq.pop();
            if (check[curr]) continue;
            check[curr] = 1;
            int dist_curr = g[prev][curr];
            for (int j : rel[curr]) {
                qq.push(make_pair(make_pair(curr, j), dist_curr));
            }
        }
    }
    for (int i = 1; i < N + 1; ++i) {
        for (int j = 1; j < N + 1; ++j) {
            if (g[i][j] == de) g[i][j] = -1;
        }
    }
    for (int i = 0; i < Q; ++i) {
        int k, v, out = 0;
        scanf("%d %d", &k, &v);
        for (int n = 1; n < N + 1; ++n) {
            if (k <= g[v][n])
                ++out;
        }
        printf("%d\n", out);
    }
    return 0;
}
