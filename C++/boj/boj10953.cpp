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
//https://www.acmicpc.net/problem/10953
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int T, a, b;
    scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        scanf("%d,%d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
