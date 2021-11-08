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
//https://www.acmicpc.net/problem/2884
int main(int argc, char const *argv[]) {
    int h, m;
    scanf("%d %d", &h, &m);
    int r = h * 60 + m - 45;
    if (r < 0)
        r += 24 * 60;
    printf("%d %d\n", r / 60, r % 60);
    return 0;
}
