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
// boj.kr/1676
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N;
    scanf("%d", &N);
    int cnt2 = 0;
    int cnt5 = 0;
    for (int i = 1; i <= N; ++i) {
        int t = i;
        while ((!! t) && ! (t % 2)) {
            ++cnt2;
            t /= 2;
        }
        while ((!! t) && ! (t % 5)) {
            ++cnt5;
            t /= 5;
        }
    }
    printf("%d\n", min(cnt2, cnt5));
    return 0;
}
