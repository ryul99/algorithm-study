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
//https://www.acmicpc.net/problem/2775

int apt[20][20];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int T, K, N;
    scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        scanf("%d %d", &K, &N);
        for (int j = 0; j <= N; ++j) {
            apt[0][j] = j;
        }
        for (int f = 1; f <= K; ++f) {
            for (int h = 1; h <= N; ++h) {
                apt[f][h] = 0;
                for (int lh = 1; lh <= h; ++lh)
                    apt[f][h] += apt[f - 1][lh];
            }
        }
        printf("%d\n", apt[K][N]);
    }
    return 0;
}
