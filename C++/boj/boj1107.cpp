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
//https://www.acmicpc.net/problem/1107
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M, dist=1 << 30;
    vector<bool> v(10, true);
    scanf("%d %d", &N, &M);
    for (int i = 0; i < M; ++i) {
        int a;
        scanf("%d", &a);
        v[a] = false;
    }
    for (int i = 0; i <= 1100000; ++i) {
        bool test = true;
        int n = i, cnt = 0;
        while (n) {
            if (!v[n % 10]) {
                test = false;
                break;
            }
            ++cnt;
            n /= 10;
        }
        if (i == 0) {
            if (v[0])
                cnt = 1;
            else
                cnt = 1 << 30;
        }
        if (!test)
            cnt = 1 << 30;
        int temp = abs(N - i);
        temp += min(abs(i - 100), cnt);
        dist = min(dist, temp);
    }
    printf("%d\n", dist);
    return 0;
}
