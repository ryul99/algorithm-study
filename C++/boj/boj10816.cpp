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
//https://www.acmicpc.net/problem/10816

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M;
    map<int, int> m;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        int a;
        scanf("%d", &a);
        if (m.find(a) == m.end())
            m.insert({a, 1});
        else
            m[a]++;
    }
    scanf("%d", &M);
    for (int i = 0; i < M; ++i) {
        int a;
        scanf("%d", &a);
        if (m.find(a) == m.end())
            printf("0 ");
        else
            printf("%d ", m[a]);
    }
    printf("\n");
    return 0;
}
