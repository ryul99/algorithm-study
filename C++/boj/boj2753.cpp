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
//http://www.acmicpc.net/problem/2753
int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    printf("%d\n", (!!(n % 4)) ^ (!(n%100)) ^ (!!(n%400)));
    return 0;
}
