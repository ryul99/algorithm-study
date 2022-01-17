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
//https://www.acmicpc.net/problem/10870
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, a = 0, b = 1, c = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d\n", a);
    return 0;
}
