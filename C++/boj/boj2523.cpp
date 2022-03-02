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
//https://www.acmicpc.net/problem/2523
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < i; ++j)
            printf("*");
        printf("\n");
    }
    for (int i = N - 1; i >= 1; --i) {
        for (int j = 0; j < i; ++j)
            printf("*");
        printf("\n");
    }
    return 0;
}
