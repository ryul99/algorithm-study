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
//https://www.acmicpc.net/problem/1920

vector<int> v;

int binary_search(int value) {
    int begin = 0;
    int end = v.size();
    while (begin < end - 1) {
        int mid = (begin + end) / 2;
        // printf("%d %d %d\n", begin, mid, end);
        if (v[mid] == value)
            return 1;
        if (v[mid] > value) {
            end = mid;
            continue;
        }
        if (v[mid] < value) {
            begin = mid;
            continue;
        }
    }
    if (v[(begin + end) / 2] == value)
        return 1;
    return 0;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M, a;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &a);
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    scanf("%d", &M);
    for (int i = 0; i < M; ++i) {
        scanf("%d", &a);
        printf("%d\n", binary_search(a));
    }
    return 0;
}
