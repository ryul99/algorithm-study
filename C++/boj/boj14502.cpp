#include <stdio.h>
#include <string.h>
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

int mat[10][10];
const int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

using namespace std;

void dfs(int m[10][10], int i, int j) {
    if (m[i][j] == 2) {
        for (int d = 0; d < 4; d++) {
            if (m[i + dir[d][0]][j + dir[d][1]] == 0) {
                m[i + dir[d][0]][j + dir[d][1]] = 2;
                dfs(m, i + dir[d][0], j + dir[d][1]);
            }
        }
    }
}

int do_dfs(int m[10][10]) {
    // spread virus
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (m[i][j] == 2) {
                // printf("before dfs\n");
                dfs(m, i, j);
                // printf("after dfs\n");
            }
        }
    }
    // for (int i = 0; i < 10; i++) {
    //     for (int j = 0; j < 10; j++) {
    //         printf("%d ", m[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // count safe area
    int safe = 0;
    for (int i = 1; i < 9; i++) {
        for (int j = 1; j < 9; j++) {
            if (m[i][j] == 0)
                safe++;
        }
    }
    return safe;
}

//https://www.acmicpc.net/problem/14502
int main(int argc, char const *argv[]) {
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            mat[i][j] = -1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int max_safe = -1;
    for (int i = 0; i < 8 * 8; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                if (
                    (mat[i / 8 + 1][i % 8 + 1] == 0) &&
                    (mat[j / 8 + 1][j % 8 + 1] == 0) &&
                    (mat[k / 8 + 1][k % 8 + 1] == 0)
                    ) {
                        int dfs_mat[10][10];
                        copy(&mat[0][0], &mat[0][0] + 10 * 10, &dfs_mat[0][0]);
                        dfs_mat[i / 8 + 1][i % 8 + 1] = 1;
                        dfs_mat[j / 8 + 1][j % 8 + 1] = 1;
                        dfs_mat[k / 8 + 1][k % 8 + 1] = 1;
                        int dfs_result = do_dfs(dfs_mat);
                        // printf("bye\n");
                        max_safe = max(max_safe, dfs_result);
                    }
            }
        }
    }
    printf("%d\n", max_safe);
    return 0;
}
