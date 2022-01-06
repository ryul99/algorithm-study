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

char rgb[110][110];
char gb[110][110];
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

using namespace std;
//https://www.acmicpc.net/problem/10026

void dfs(char arr[110][110], int r, int c) {
    char v = arr[r][c];
    if (v == 'N')
        return;

    arr[r][c] = 'C';
    for (int d = 0; d < 4; ++d) {
        if (v == arr[r + dir[d][0]][c + dir[d][1]])
            dfs(arr, r + dir[d][0], c + dir[d][1]);
    }
}

int do_dfs(char arr[110][110]) {
    int cnt = 0;
    for (int i = 0; i < 110; ++i) {
        for (int j = 0; j < 110; ++j) {
            if (arr[i][j] == 'N' || arr[i][j] == 'C')
                continue;
            cnt++;
            dfs(arr, i, j);
        }
    }
    return cnt;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d\n", &N);
    //array init
    for (int i = 0; i < 110; ++i) {
        for (int j = 0; j < 110; ++j) {
            rgb[i][j] = 'N';
            gb[i][j] = 'N';
        }
    }
    //get input
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            char c;
            scanf(" %c", &c);
            rgb[i][j] = c;
            if (c == 'R')
                c = 'G';
            gb[i][j] = c;
        }
    }
    printf("%d %d\n", do_dfs(rgb), do_dfs(gb));
    return 0;
}
