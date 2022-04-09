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
//https://www.acmicpc.net/problem/15650

void rec(vector<string> &v, int max, int curr, int need, string out) {
    // printf("%d %d: %s\n", curr, need, out.c_str());
    if (need == 1)
        return v.push_back(out + to_string(curr));
    if (max - curr < need - 1)
        return;
    for (int i = curr + 1; i <= max; ++i) {
        rec(v, max, i, need - 1, out + to_string(curr) + " ");
    }
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int n, m;
    vector<string> v;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        rec(v, n, i, m, "");
    }
    for (string s : v)
        printf("%s\n", s.c_str());
    return 0;
}
