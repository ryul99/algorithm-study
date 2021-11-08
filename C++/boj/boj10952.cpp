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
//https://www.acmicpc.net/problem/10952
int main(int argc, char const *argv[]) {
    while(true) {
        int a, b;
        scanf("%d %d\n", &a, &b);
        if (a == 0 && b == 0)
            break;
        printf("%d\n", a + b);
    }
    return 0;
}
