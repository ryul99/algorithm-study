#include <stdio.h>
#include <string.h>
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
//https://www.acmicpc.net/problem/11021
int main(int argc, char const *argv[]) {
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
    }
    return 0;
}
