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
//https://www.acmicpc.net/problem/7568
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, x, y, cnt = 1;
    scanf("%d", &N);
    vector<pair<int, int> > xy;
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &x, &y);
        xy.push_back({x, y});
    }
    for (pair<int, int> xy1 : xy) {
        x = xy1.first;
        y = xy1.second;
        cnt = 1;
        for (pair<int, int> xy2: xy)
            if (x < xy2.first && y < xy2.second)
                cnt++;
        printf("%d ", cnt);
    }
    printf("\n");
    return 0;
}
