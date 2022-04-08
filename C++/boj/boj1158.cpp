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
//https://www.acmicpc.net/problem/1158
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int n, k;
    queue<int> q;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; ++i)
        q.push(i);
    printf("<");
    while (!q.empty()) {
        int a = -1;
        for (int cnt = 1; cnt <= k; ++cnt) {
            a = q.front();
            q.pop();
            if (cnt != k)
                q.push(a);
        }
        printf("%d", a);
        if (q.size() > 0)
            printf(", ");
    }
    printf(">\n");

    return 0;
}
