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
//https://www.acmicpc.net/problem/2667

int m[30][30];
int dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int dfs(int r, int c) {
    int count = 1;
    if (m[r][c] != 1)
        return 0;
    m[r][c] = 0;
    for (int i = 0; i < 4; ++i) {
        if (m[r + dir[i][0]][c + dir[i][1]] == 1)
            count += dfs(r + dir[i][0], c + dir[i][1]);
    }
    return count;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    vector<int> v;
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            char c;
            scanf(" %c", &c);
            m[i][j] = c - '0';
        }
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            int c = dfs(i, j);
            if (!!c)
                v.push_back(c);
        }
    }
    sort(v.begin(), v.end());
    printf("%lu\n", v.size());
    for (int c : v)
        printf("%d\n", c);    
    return 0;
}
