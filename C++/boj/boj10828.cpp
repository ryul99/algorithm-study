#include <stdio.h>
#include <string.h>
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
// https://www.acmicpc.net/problem/10828
int main(int argc, char const *argv[]) {
    int N;
    stack<int> st;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        char *input;
        scanf("%ms", &input);
        if (strcmp("push", input) == 0) {
            int x;
            scanf("%d", &x);
            st.push(x);
        } else if (strcmp("pop", input) == 0) {
            if (st.empty())
                printf("-1\n");
            else {
                int x = st.top();
                st.pop();
                printf("%d\n", x);
            }
        } else if (strcmp("size", input) == 0) {
            printf("%lu\n", st.size());
        } else if (strcmp("empty", input) == 0) {
            int r = st.empty() ? 1 : 0;
            printf("%d\n", r);
        } else if (strcmp("top", input) == 0) {
            if (st.empty())
                printf("-1\n");
            else {
                printf("%d\n", st.top());
            }
        } else {
            printf("ERROR: %s\n", input);
        }
    }
    return 0;
}
