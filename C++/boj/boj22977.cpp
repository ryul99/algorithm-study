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
//https://www.acmicpc.net/problem/22977
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    long long N, prev_x, prev_y, x, y, start_x, sum = 0;
    scanf("%lld", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%lld %lld", &x, &y);
        if (i < 1) {
            start_x = x;
        } else {
            sum += abs(x - prev_x) + abs(y - prev_y);
        }
        prev_x = x;
        prev_y = y;
    }
    printf("%lld\n", sum - abs(x - start_x));
    return 0;
}
