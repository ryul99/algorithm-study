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
//https://www.acmicpc.net/problem/11729

void rec(int n, int origin, int temp, int target) {
    if (n == 0)
        return;
    rec(n - 1, origin, target, temp);
    printf("%d %d\n", origin, target);
    rec(n - 1, temp, origin, target);
    return;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d", &N);
    printf("%d\n", (int) pow(2, N) - 1);
    rec(N, 1, 2, 3);
    return 0;
}
