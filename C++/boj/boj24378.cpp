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
//https://www.acmicpc.net/problem/24378
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int T, n, a, b, c;
    scanf("%d %d %d %d %d", &T, &n, &a, &b, &c);
    if (T == 2)
        printf("%d\n", min(min(a, b), c));
    if (T == 1)
        printf("%d\n", max(max(a + b - n, 0) + c - n, 0));
    return 0;
}
