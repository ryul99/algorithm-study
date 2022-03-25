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
//https://www.acmicpc.net/problem/2231
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, i, cnt, num;
    scanf("%d", &N);
    for (i = 0; i < N; ++i) {
        cnt = i;
        num = i;
        for (int j = 0; j < 7; ++j) {
            cnt += num % 10;
            num /= 10;
        }
        if (cnt == N)
            break;
    }
    if (i == N)
        printf("0\n");
    else
        printf("%d\n", i);
    return 0;
}
