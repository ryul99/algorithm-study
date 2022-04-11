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
//https://www.acmicpc.net/problem/14888

int arr[15];
int oper[4]; // + - * /
int N;

pair<int, int> rec(int idx, int mi, int ma) {
    if (idx >= N)
        return make_pair(mi, ma);
    int rmin = 1 << 30, rmax = - 1 << 30;
    if (oper[0] > 0) {
        oper[0]--;
        auto r = rec(idx + 1, mi + arr[idx], ma + arr[idx]);
        rmin = min(rmin, r.first);
        rmax = max(rmax, r.second);
        oper[0]++;
    }
    if (oper[1] > 0) {
        oper[1]--;
        auto r = rec(idx + 1, mi - arr[idx], ma - arr[idx]);
        rmin = min(rmin, r.first);
        rmax = max(rmax, r.second);
        oper[1]++;
    }
    if (oper[2] > 0) {
        oper[2]--;
        auto r = rec(idx + 1, mi * arr[idx], ma * arr[idx]);
        rmin = min(rmin, r.first);
        rmax = max(rmax, r.second);
        oper[2]++;
    }
    if (oper[3] > 0) {
        oper[3]--;
        auto r = rec(idx + 1, mi / arr[idx], ma / arr[idx]);
        rmin = min(rmin, r.first);
        rmax = max(rmax, r.second);
        oper[3]++;
    }
    return make_pair(rmin, rmax);
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 4; ++i)
        scanf("%d", &oper[i]);
    auto r = rec(1, arr[0], arr[0]);
    printf("%d\n%d\n", r.second, r.first);
    return 0;
}
