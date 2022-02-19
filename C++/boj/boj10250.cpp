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
//https://www.acmicpc.net/problem/10250
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int T, H, W, N;
    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        scanf("%d %d %d", &H, &W, &N);
        printf("%d%02d\n", (N - 1) % H + 1, (N - 1) / H + 1);
    }
    return 0;
}
