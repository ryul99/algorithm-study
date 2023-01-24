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
// https://boj.kr/11279
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d", &N);
    priority_queue<int> pq;
    for (int i = 0; i < N; ++i) {
        int in;
        scanf("%d", &in);
        if (in == 0) {
            if (pq.empty())
                printf("0\n");
            else {
                printf("%d\n", pq.top());
                pq.pop();
            }
        } else {
            pq.push(in);
        }
    }
    return 0;
}
