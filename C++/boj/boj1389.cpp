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
// boj.kr/1389

int m[5050][5050];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N, M;
    int resU = -1, resC = 12345;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < 5050; ++i) {
        for (int j = 0; j < 5050; ++j) {
            m[i][j] = 12345;
            if (i == j)
                m[i][j] = 0;
        }
    }
    for (int i = 0; i < M; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        m[a][b] = 1;
        m[b][a] = 1;
    }
    for (int k = 1; k <= N; ++k) {
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
               m[i][j] = min(m[i][j], m[i][k] + m[k][j]);
            }
        }
    }
    for (int i = 1; i <= N; ++i) {
        int cnt = 0;
        for (int j = 1; j <= N; ++j) {
//            printf("%d ", m[i][j]);
            cnt += m[i][j];
        }
//        printf("\n");
        if (cnt < resC) {
            resC = cnt;
            resU = i;
        }
    }
    printf("%d\n", resU);
    return 0;
}
