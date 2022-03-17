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
//https://www.acmicpc.net/problem/1697

int pos[100100];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, K, cnt=0;
    scanf("%d %d", &N, &K);
    if (N == K) {
        printf("0\n");
        return 0;
    }
    pos[N] = -1;
    queue<int> q;
    q.push(-1);
    q.push(N);
    while(pos[K] == 0) {
        if (q.front() == -1) {
            cnt++;
            q.pop();
            q.push(-1);
            continue;
        }
        int f = q.front();
        // printf("%d %d\n", cnt, f);
        // printf("%d\n", f);
        q.pop();
        if (f + 1 < 100100 && pos[f + 1] == 0) {
            pos[f + 1] = cnt;
            q.push(f + 1);
        }
        if (0 <= f - 1 && pos[f - 1] == 0) {
            pos[f - 1] = cnt;
            q.push(f - 1);
        }
        if (2 * f < 100100 && pos[2 * f] == 0) {
            pos[2 * f] = cnt;
            q.push(2 * f);
        }
    }
    printf("%d\n", pos[K]);
    return 0;
}
