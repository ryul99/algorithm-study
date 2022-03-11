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
//https://www.acmicpc.net/problem/2455
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int cnt = 0, max_cnt = 0, a, b;
    for (int i = 0; i < 4; ++i) {
        scanf("%d %d", &a, &b);
        cnt += b - a;
        max_cnt = max(max_cnt, cnt);
    }
    printf("%d\n", max_cnt);
    return 0;
}
