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
//https://www.acmicpc.net/problem/15649
//backtracking..??
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M;
    scanf("%d %d", &N, &M);
    vector<int> v;
    vector<bool> check(N + 5);
    for (int i = 1; i <= M; ++i)
        v.push_back(i);
    while (v[0] <= N) {
        int print = 0;
        fill(check.begin(), check.end(), false);
        for (int ele : v)
            check[ele] = true;
        for (bool ele : check)
            print += !!ele;
        if (print == M) {
            for (int ele : v)
                printf("%d ", ele);
            printf("\n");
        }
        v[M - 1]++;
        for (int i = 1; i < M; ++i) {
            if (v[M - i] > N) {
                v[M - i] = 1;
                v[M - i - 1]++;
            }
        }
    }
    return 0;
}
