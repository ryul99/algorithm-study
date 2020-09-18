#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;
//https://www.acmicpc.net/problem/2438
int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}