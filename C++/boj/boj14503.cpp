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
//https://www.acmicpc.net/problem/14503

#define EMPTY 0
#define WALL 1
#define CLEAN 2

int m[55][55];
int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}; // NESW

int clean(int r, int c, int d) {

}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M, bot_r, bot_c, bot_d, bot_cnt = 0;
    scanf("%d %d", &N, &M);
    scanf("%d %d %d", &bot_r, &bot_c, &bot_d);
    for (int i = 0; i < N; ++i)
        for(int j = 0; j < M; ++j)
            scanf("%d", &m[i][j]);
    while (true) {
        bool end = false;
        // printf("%d %d %d\n", bot_r, bot_c, bot_d);
        m[bot_r][bot_c] = CLEAN;
        bot_cnt++;
        while (true) {
            bool search = false;
            for (int d_idx = 1; d_idx <= 4; ++d_idx) {
                int curr_d = (bot_d + 3 * d_idx) % 4;
                int curr_r = bot_r + dir[curr_d][0];
                int curr_c = bot_c + dir[curr_d][1];
                if (m[curr_r][curr_c] == EMPTY) {
                    bot_d = curr_d;
                    bot_r = curr_r;
                    bot_c = curr_c;
                    search = true;
                    break;
                }
            }
            if (search)
                break;
            //There is no EMPTY
            int back_r = bot_r - dir[bot_d][0];
            int back_c = bot_c - dir[bot_d][1];
            if (m[back_r][back_c] == WALL) {
                end = true;
                break;
            }
            bot_r = back_r;
            bot_c = back_c;
        }
        if (end)
            break;
    }
    printf("%d\n", bot_cnt);
    return 0;
}
