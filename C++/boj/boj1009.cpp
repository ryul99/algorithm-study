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
//https://www.acmicpc.net/problem/1009

vector<int> mod0 = {0};
vector<int> mod1 = {1};
vector<int> mod2 = {2, 4, 8, 6};
vector<int> mod3 = {3, 9, 7, 1};
vector<int> mod4 = {4, 6};
vector<int> mod5 = {5};
vector<int> mod6 = {6};
vector<int> mod7 = {7, 9, 3, 1};
vector<int> mod8 = {8, 4, 2, 6};
vector<int> mod9 = {9, 1};
vector<vector<int>> mod = {mod0, mod1, mod2, mod3, mod4, mod5, mod6, mod7, mod8, mod9};

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int T, a, b;
    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        scanf("%d %d", &a, &b);
        a = a % 10;
        int l = mod[a].size();
        b = (b - 1) % l;
        int ans = mod[a][b];
        if (ans == 0) ans = 10;
        printf("%d\n", ans);
    }
    return 0;
}
