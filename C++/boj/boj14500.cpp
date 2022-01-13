#include <stdio.h>
#include <string.h>
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
//https://www.acmicpc.net/problem/14500

int arr[550][550];
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M, max_cnt = 0;
    //init
    scanf("%d %d", &N, &M);
    for (int i = 10; i < N + 10; ++i)
        for (int j = 10; j < M + 10; ++j)
            scanf("%d", &arr[i][j]);
    vector<bool> comb(4);
    fill(comb.begin(), comb.begin() + 3, true);
    //loop
    for (int i = 10; i < N + 10; ++i) {
        for (int j = 10; j < M + 10; ++j) {
            // T
            sort(comb.begin(), comb.end());
            do {
                int cnt = arr[i][j];
                for (int comb_idx = 0; comb_idx < 4; ++comb_idx)
                    if (comb[comb_idx])
                        cnt += arr[i + dir[comb_idx][0]][j + dir[comb_idx][1]];
                max_cnt = max(max_cnt, cnt);
            } while(next_permutation(comb.begin(), comb.end()));
            // others
            for (int dir_i = 0; dir_i < 4; ++dir_i) {
                for (int dir_j = 0; dir_j < 4; ++dir_j) {
                    if (dir[dir_i][0] + dir[dir_j][0] == 0 && dir[dir_i][1] + dir[dir_j][1] == 0)
                        continue;
                    for (int dir_k = 0; dir_k < 4; ++dir_k) {
                        if (dir[dir_j][0] + dir[dir_k][0] == 0 && dir[dir_j][1] + dir[dir_k][1] == 0)
                            continue;
                        int a = arr[i][j];
                        int b = arr[i + dir[dir_i][0]][j + dir[dir_i][1]];
                        int c = arr[i + dir[dir_i][0] + dir[dir_j][0]][j + dir[dir_i][1] + dir[dir_j][1]];
                        int d = arr[i + dir[dir_i][0] + dir[dir_j][0] + dir[dir_k][0]][j + dir[dir_i][1] + dir[dir_j][1] + dir[dir_k][1]];
                        max_cnt = max(max_cnt, a + b + c +d);
                        // if (max_cnt == a+b+c+d) {
                        //     printf("%d %d / %d %d %d\n", i, j, dir_i, dir_j, dir_k);
                        //     printf("%d %d %d %d\n", a, b, c, d);
                        // }
                    }
                }
            }
        }
    }
    printf("%d\n", max_cnt);
    return 0;
}
