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

int inn[550][550];
int dp[550][550];

void move(int n, int m){
    dp[n][m]++;
    if(n + 1 < 550 && inn[n + 1][m] < inn[n][m])
        move(n + 1, m);
    if(m + 1 < 550 && inn[n][m + 1] < inn[n][m])
        move(n, m + 1);
    if(n - 1 > 0 && inn[n - 1][m] < inn[n][m])
        move(n - 1, m);
    if(m - 1 > 0 && inn[n][m - 1] < inn[n][m])
        move(n, m - 1);
    return;
}

using namespace std;
//https://www.acmicpc.net/problem/1520
int main(int argc, char const *argv[]) {
    int N, M;
    scanf("%d %d", &M, &N);
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++)
            scanf("%d", &inn[i][j]);
    }
    move(0, 0);
    printf("%d\n", dp[M - 1][N - 1]);
    return 0;
}