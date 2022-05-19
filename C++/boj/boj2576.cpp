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
//https://www.acmicpc.net/problem/2576
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int sum = 0, minimum = 110, a;
    for (int i = 0; i < 7; ++i) {
        scanf("%d", &a);
        if (a % 2) {
            sum += a;
            minimum = min(a, minimum);
        }
    }
    if (sum == 0)
        printf("-1\n");
    else
        printf("%d\n%d\n", sum, minimum);
    return 0;
}
