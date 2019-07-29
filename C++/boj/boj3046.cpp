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
//https://www.acmicpc.net/problem/3046
int main(int argc, char const *argv[]) {
    int r1, s;
    scanf("%d %d", &r1, &s);
    printf("%d\n", 2 * s - r1);
    return 0;
}