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

int dp[110]; //dp[i]: i is accumulated weight

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
    for()
    max(dp[w-a] + b, dp[w])
    return 0;
}