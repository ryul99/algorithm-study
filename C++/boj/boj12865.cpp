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

int dp[100100]; //dp[i]: i is (accumulated weight)

using namespace std;
//https://www.acmicpc.net/problem/12865
int main(int argc, char const *argv[]) {
    int N, K;
    scanf("%d %d", &N, &K);
    vector<pair<int, int> > all_obj;
    for(int i = 0; i < N ;i++){
        int a,b;
        scanf("%d %d", &a, &b);
        all_obj.emplace_back(a,b);
    }
    sort(all_obj.begin(), all_obj.end());
    for(auto p: all_obj){
        int w = p.first;
        int v = p.second;
        for(int i = 0; i < 100100 - w; i++){
            dp[100100 - i] = max(dp[100100 - i - w] + v, dp[100100 - i]);
        }
        dp[w] = max(dp[w], v);
    }
    int mx = 0;
    for(int i = 0; i <= K; i++)
        mx = max(mx, dp[i]);
    printf("%d\n", mx);
    return 0;
}