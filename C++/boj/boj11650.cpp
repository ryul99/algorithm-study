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
//https://www.acmicpc.net/problem/11650
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, x, y;
    vector <pair<int, int> > v;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &x, &y);
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for (auto i : v)
        printf("%d %d\n", i.first, i.second);
    return 0;
}
