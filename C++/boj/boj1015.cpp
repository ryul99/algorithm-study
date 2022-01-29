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
//https://www.acmicpc.net/problem/1015

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, a, cnt=0;
    array<vector<int>, 1010> p_arr;
    array<int, 55> B;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &a);
        p_arr[a].push_back(i);
    }
    for (vector<int> p : p_arr) {
        for (int p_idx : p) {
            B[p_idx]=cnt++;
        }
    }
    for (int i = 0; i < N; ++i) {
        printf("%d ", B[i]);
    }
    printf("\n");
    return 0;
}
