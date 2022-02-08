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
//https://www.acmicpc.net/problem/7569

int m[110][110][110];
array<array<int, 3>, 6> dir = {{ {{0, 0, 1}}, {{0, 0, -1}}, {{0, 1, 0}}, {{0, -1, 0}}, {{1, 0, 0}}, {{-1, 0, 0}} }};

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int M, N, H, day = 0;
    queue<array<int, 3> > que;
    scanf("%d %d %d", &M, &N, &H);
    for (int i = 0; i < 110; ++i)
        for (int j = 0; j < 110; ++j)
            for (int k = 0; k < 110; ++k)
                m[i][j][k] = -1;
    bool is_all = true;
    for (int h = 1; h <= H; ++h) {
        for (int c = 1; c <= N; ++c) {
            for (int r = 1; r <= M; ++r) {
                scanf("%d", &m[h][c][r]);
                if (m[h][c][r] == 1)
                    que.push({h, c, r});
                if (is_all && m[h][c][r] == 0)
                    is_all = false;
            }
        }
    }
    if (is_all) {
        printf("0\n");
        return 0;
    }
    que.push({-1, -1, -1});
    while(que.size() > 1) {
        array<int, 3> curr = que.front();
        que.pop();
        // printf("%d %d %d\n", curr[0], curr[1], curr[2]);
        if (curr == array<int, 3> {-1, -1, -1}) {
            day++;
            que.push({-1, -1, -1});
            continue;
        }
        for (array<int, 3> d : dir) {
            if (m[curr[0] + d[0]][curr[1] + d[1]][curr[2] + d[2]] == 0) {
                // printf("%d %d %d\n", curr[0] + d[0], curr[1] + d[1], curr[2] + d[2]);
                m[curr[0] + d[0]][curr[1] + d[1]][curr[2] + d[2]] = 1;
                que.push({curr[0] + d[0], curr[1] + d[1], curr[2] + d[2]});
            }
        }

        // // test
        // for (int h = 1; h <= H; ++h) {
        //     for (int c = 1; c <= N; ++c) {
        //         for (int r = 1; r <= M; ++r)
        //             printf("%d ", m[h][c][r]);
        //         printf("\n");
        //     }
        //     printf("\n");
        // }

    }

    for (int h = 1; h <= H; ++h) {
        for (int c = 1; c <= N; ++c) {
            for (int r = 1; r <= M; ++r) {
                if (m[h][c][r] == 0) {
                    printf("-1\n");
                    return 0;
                }
            }
        }
    }
    printf("%d\n", day);
    return 0;
}
