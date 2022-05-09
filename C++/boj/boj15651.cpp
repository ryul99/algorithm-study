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
//https://www.acmicpc.net/problem/15651

void rec(int n, int m, string str) {
    if (m < 0)
        return;
    if (m == 0) {
        printf("%s\n", str.c_str());
        return;
    }
    for (int i = 1; i <= n; ++i) {
        rec(n, m - 1, str + to_string(i) + " ");
    }
    return;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M;
    scanf("%d %d", &N, &M);
    rec(N, M, "");
    printf("\n");
    return 0;
}
