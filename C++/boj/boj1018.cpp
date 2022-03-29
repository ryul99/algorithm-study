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
//https://www.acmicpc.net/problem/1018

int arr[55][55];
int chess[2][8][8];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int n, m, min_v = 1000000;
    char c;

    for (int T = 0; T < 2; ++T) {
        int t = T;
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                chess[T][i][j] = t;
                t = !t;
            }
            t = !t;
        }
    }

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf(" %c", &c);
            arr[i][j] = !!(c - 'B');
        }
    }
    for (int i = 1; i + 7 <= n; ++i) {
        for (int j = 1; j + 7 <= m; ++j) {
            for (int t = 0; t < 2; ++t) {
                int cnt = 0;
                for (int ii = 0; ii < 8; ++ii) {
                    for (int jj = 0; jj < 8; ++jj) {
                        cnt += arr[ii + i][jj + j] ^ chess[t][ii][jj];
                    }
                }
                min_v = min(min_v, cnt);
            }
        }
    }
    printf("%d\n", min_v);
    return 0;
}
