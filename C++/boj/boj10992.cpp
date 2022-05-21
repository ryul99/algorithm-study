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
//https://www.acmicpc.net/problem/10992
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j)
            printf(" ");
        printf("*");
        for (int j = 0; j < 2 * i - 1; ++j)
            printf(" ");
        if (i > 0)
            printf("*");
        printf("\n");
    }
    for (int i = 0; i < 2 * n - 1; ++i)
        printf("*");
    printf("\n");
    return 0;
}
