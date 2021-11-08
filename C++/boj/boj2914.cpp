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
//https://www.acmicpc.net/problem/2914
int main(int argc, char const *argv[]) {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a * (b - 1) + 1);
    return 0;
}
