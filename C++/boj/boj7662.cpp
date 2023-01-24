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
//https://www.acmicpc.net/problem/7662
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        int K;
        scanf("%d", &K);
        priority_queue<long long> max_heap;
        priority_queue<long long, vector<long long>, greater<long long>> min_heap;
        priority_queue<long long> unpopped_max_heap;
        priority_queue<long long, vector<long long>, greater<long long>> unpopped_min_heap;
        for (int k = 0; k < K; ++k) {
            char o;
            long long num;
            scanf(" %c", &o);
            scanf("%lld", &num);
            if (o == 'I') {
                    max_heap.push(num);
                    min_heap.push(num);
            } else if (o == 'D') {
                bool double_pop = !max_heap.empty() && !min_heap.empty() && max_heap.top() == min_heap.top();
                long long MaxTop;
                long long MinTop;
                if (!max_heap.empty() && num == 1) {
                    // printf("max pop: %lld\n", max_heap.top());
                    MaxTop = max_heap.top();
                    max_heap.pop();
                }
                if (!min_heap.empty() && num == -1) {
                    // printf("min pop: %lld\n", min_heap.top());
                    MinTop = min_heap.top();
                    min_heap.pop();
                }
                if (! double_pop) {
                    if (num == 1) {
                        unpopped_min_heap.push(MaxTop);
                    }
                    if (num == -1) {
                        unpopped_max_heap.push(MinTop);
                    }
                } else {
                    if (num == 1)
                        min_heap.pop();
                    else
                        max_heap.pop();
                }
            }

            // Refine
            while (! min_heap.empty() && ! unpopped_min_heap.empty() && min_heap.top() >= unpopped_min_heap.top()) {
                if (min_heap.top() > unpopped_min_heap.top()) {
                    unpopped_min_heap.pop();
                    continue;
                }
                min_heap.pop();
                unpopped_min_heap.pop();
            }
            while (! max_heap.empty() && ! unpopped_max_heap.empty() && max_heap.top() <= unpopped_max_heap.top()) {
                if (max_heap.top() < unpopped_max_heap.top()) {
                    unpopped_max_heap.pop();
                    continue;
                }
                max_heap.pop();
                unpopped_max_heap.pop();
            }
            // printf("\n");
        }


        if (max_heap.empty() || min_heap.empty()) {
            printf("EMPTY\n");
            continue;
        }
        printf("%lld %lld\n", max_heap.top(), min_heap.top());
    }
    return 0;
}
