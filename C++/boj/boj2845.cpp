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
//https://www.acmicpc.net/problem/2845
int main(int argc, char const *argv[]) {
    int L, P, a, b, c, d, e;
    scanf("%d %d", &L, &P);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int r = L * P;
    printf("%d %d %d %d %d\n", a-r, b-r, c-r, d-r, e-r);
    return 0;
}
