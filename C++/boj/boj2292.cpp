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
//https://www.acmicpc.net/problem/2292
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, cnt = 1, depth = 1;
    scanf("%d", &N);
    while(cnt < N) {
        depth++;
        cnt += (depth - 1) * 6;
    }
    printf("%d\n", depth);
    return 0;
}
