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

using namespace std;
//https://www.acmicpc.net/problem/1520
int main(int argc, char const *argv[]) {
    int N, M;
    vector<pair<int, pair<int, int> > > v;
    scanf("%d %d", &M, &N);
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &inn[i][j]);
            v.push_back(make_pair(inn[i][j], make_pair(i, j)));
        }
    }
    sort(v.begin(), v.end());
    dp[0][0] = 1;
    while(!v.empty()){
        auto t = v.back();
        int value = t.first;
        int i = t.second.first;
        int j = t.second.second;
        if(i + 1 < 550 && inn[i + 1][j] > inn[i][j]){
            dp[i][j] += dp[i + 1][j];
        }
        if(j + 1 < 550 && inn[i][j + 1] > inn[i][j]){
            dp[i][j] += dp[i][j + 1];
        }
        if(i - 1 >= 0 && inn[i - 1][j] > inn[i][j]){
            dp[i][j] += dp[i - 1][j];
        }
        if(j - 1 >= 0 && inn[i][j - 1] > inn[i][j]){
            dp[i][j] += dp[i][j - 1];
        }
        v.pop_back();
    }
    printf("%d\n", dp[M - 1][N - 1]);
    return 0;
}