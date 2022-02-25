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
//https://www.acmicpc.net/problem/10845
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d", &N);
    queue<int> q;
    for (int T = 0; T < N; ++T) {
        char str[30];
        scanf("%s", str);
        if (!strcmp("pop", str)) {
            if (q.empty()) {
                printf("-1\n");
                continue;
            }
            printf("%d\n", q.front());
            q.pop();
        } else if (!strcmp("push", str)) {
            int input;
            scanf("%d", &input);
            q.push(input);
        } else if (!strcmp("back", str)) {
            if (q.empty()) {
                printf("-1\n");
                continue;
            }
            printf("%d\n", q.back());
        } else if (!strcmp("size", str)) {
            printf("%d\n", (int) q.size());
        } else if (!strcmp("empty", str)) {
            printf("%d\n", !!q.empty());
        } else if (!strcmp("front", str)) {
            if (q.empty()) {
                printf("-1\n");
                continue;
            }
            printf("%d\n", q.front());
        } else {
            printf("ERROR: %s\n", str);
        }
    }
    return 0;
}
