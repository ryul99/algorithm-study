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

char arr[25][25];
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

using namespace std;
//https://www.acmicpc.net/problem/1987

int dfs(int r, int c, int depth, long long abc) {
    if (arr[r][c] == 'n' || abc & (1 << (arr[r][c] - 'A')))
        return depth;
    depth++;
    abc = abc | (1 << (arr[r][c] - 'A'));
    int max_cnt = 0;
    for (int d = 0; d < 4; ++d) {
        max_cnt = max(max_cnt, dfs(r + dir[d][0], c + dir[d][1], depth, abc));
    }
    return max_cnt;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int R, C;
    for(int i = 0; i < 25; ++i)
        for(int j = 0; j < 25; ++j)
            arr[i][j] = 'n';
    
    scanf("%d %d", &R, &C);
    for(int i = 1; i <= R; ++i)
        for(int j = 1; j <= C; ++j)
            scanf(" %c", &arr[i][j]);
    printf("%d\n", dfs(1, 1, 0, 0));
    return 0;
}
