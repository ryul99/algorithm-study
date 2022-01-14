#include <stdio.h>
#include <string.h>
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
//https://www.acmicpc.net/problem/2798

int arr[110];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M, min_abs = 330000;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; ++i)
        scanf("%d", &arr[i]);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            for (int k = 0; k < j; ++k) {
                int added = arr[i] + arr[j] + arr[k];
                if (M - added >= 0)
                    min_abs = min(min_abs, M - added);
            }
        }
    }
    printf("%d\n", M - min_abs);
    return 0;
}
