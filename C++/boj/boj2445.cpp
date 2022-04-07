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
//https://www.acmicpc.net/problem/2445
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j)
            printf("*");
        for (int j = 0; j < 2 * (n - i - 1); ++j)
            printf(" ");
        for (int j = 0; j <= i; ++j)
            printf("*");
        printf("\n");
    }
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j)
            printf("*");
        for (int j = 0; j < 2 * (n - i - 1); ++j)
            printf(" ");
        for (int j = 0; j <= i; ++j)
            printf("*");
        printf("\n");
    }
    return 0;
}
