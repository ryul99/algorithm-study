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
//https://www.acmicpc.net/problem/7576

int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int M, N, day = 0;
    bool all = true;
    queue<pair<int, int> > q;
    array<array<int, 1010>, 1010> m;
    for (int i = 0; i < 1010; ++i)
        for (int j = 0; j < 1010; ++j)
            m[i][j] = -1;
    scanf("%d %d", &M, &N);
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            scanf("%d", &m[i][j]);
            if (m[i][j] == 1)
                q.push(make_pair(i, j));
            else if (m[i][j] == 0)
                all = false;
        }
    }
    if (all) {
        printf("0\n");
        return 0;
    }
    q.push(make_pair(-1, -1));
    while(q.size() > 1) { // day separator
        pair<int, int> curr = q.front();
        q.pop();
        if (curr == make_pair(-1, -1)) {
            q.push(make_pair(-1, -1));
            day++;
            continue;
        }
        for (int di = 0; di < 4; ++di) {
            if (m[curr.first + dir[di][0]][curr.second + dir[di][1]] == 0) {
                m[curr.first + dir[di][0]][curr.second + dir[di][1]] = 1;
                q.push(make_pair(curr.first + dir[di][0], curr.second + dir[di][1]));
            }
        }
        // for (int i = 1; i <= N; ++i) {
        //     for (int j = 1; j <= M; ++j) {
        //         printf("%d ", m[i][j]);
        //     }
        //     printf("\n");
        // }
        // printf("\n");
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (m[i][j] == 0) {
                printf("-1\n");
                return 0;
            }
        }
    }
    printf("%d\n", day);
    return 0;
}
