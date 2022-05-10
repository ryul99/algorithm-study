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
//https://www.acmicpc.net/problem/18111

int arr[550][550];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M, B, cnt = 0, mi = (int) (13 * pow(10, 7)), mih = 0;
    scanf("%d %d %d", &N, &M, &B);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &arr[i][j]);
            cnt += arr[i][j];
        }
    }
    for (int h = cnt / (N * M); h <= (cnt + B) / (N * M); ++h) {
        int c = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (arr[i][j] - h > 0)
                    c += 2 * (arr[i][j] - h);
                else
                    c += h - arr[i][j];
            }
        }
        if (mi >= c) {
            mi = c;
            mih = h;
        }
    }
    printf("%d %d\n", mi, mih);
    return 0;
}
