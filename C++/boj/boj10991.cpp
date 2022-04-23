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
//https://www.acmicpc.net/problem/10991
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < N - i; ++j)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; ++j) {
            if (j % 2 == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
