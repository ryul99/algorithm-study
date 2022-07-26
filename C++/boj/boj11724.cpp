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
//https://www.acmicpc.net/problem/11724

bool m[1010][1010];
bool check[1010];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M, p1, p2, cnt = 0;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < M; ++i) {
        scanf("%d %d", &p1, &p2);
        m[p1][p2] = true;
        m[p2][p1] = true;
    }
    for (int i = 1; i <= N; ++i) {
        if (check[i])
            continue;
        queue<int> q;
        q.push(i);
        while(! q.empty()) {
            int f = q.front();
            q.pop();
            if (check[f])
                continue;
            check[f] = true;
            for (int j = 1; j <= N; ++j) {
                if (m[f][j] && (! check[j]))
                    q.push(j);
            }
        }
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
