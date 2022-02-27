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
//https://www.acmicpc.net/problem/1813

int arr[55];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, n, result = -1;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &n);
        arr[n]++;
    }
    for (int i = 54; i >= 0; --i) {
        if (arr[i] == i) {
            result = i;
            break;
        }
    }
    printf("%d\n", result);
    return 0;
}
