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
// https://www.acmicpc.net/problem/1966
int main(int argc, char const *argv[]) {
    int T;
    scanf("%d", &T);
    for (int I = 0; I < T; I++) {
        // get input
        int arr[110];
        int arr2[110];
        int arr3[110];
        int N, M;
        int arrIdx = 0;
        int arr2Idx = 0;
        int printOrder = 0;
        scanf("%d %d", &N, &M);
        for (int i = 0; i < 110; i++) {
            arr[i] = -1;
            arr2[i] = -1;
            arr3[i] = -1;
        }
        for (int i = 0; i < N; i++) {
            int inn;
            scanf("%d", &inn);
            arr[i] = inn;
            arr2[i] = inn;
            arr3[i] = 0;
        }
        sort(arr2, arr2 + 110, greater<int>());
        while (true) {
            int max_num = arr2[arr2Idx];
            while (true) {
                if (arr3[arrIdx] == 0 && arr[arrIdx] == max_num) {
                    arr3[arrIdx] = 1;
                    break;
                }
                arrIdx += 1;
                arrIdx %= N;
            }
            if (arrIdx == M) {
                printf("%d\n", printOrder + 1);
                break;
            }
            arr2Idx++;
            printOrder++;
        }
    }
    return 0;
}