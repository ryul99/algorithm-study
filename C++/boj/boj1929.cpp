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
//https://www.acmicpc.net/problem/1929

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M;
    array<bool, 1000100> arr;
    fill(arr.begin(), arr.end(), true);
    arr[0] = false;
    arr[1] = false;
    scanf("%d %d", &M, &N);
    for (int i = 2; i * i <= N; ++i) {
        if (! arr[i])
            continue;
        for (int j = 2 * i; j <= N; j += i)
            arr[j] = false;
    }
    for (int i = M; i <= N; ++i) {
        if (arr[i])
            printf("%d\n", i);
    }
    return 0;
}
