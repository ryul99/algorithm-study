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
//https://www.acmicpc.net/problem/1074
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, r, c, cnt = 0;
    scanf("%d %d %d", &N, &r, &c);
    for (int i = N - 1; i >= 0; --i) {
        int n2 = 1 << i;
        int r2 = r / n2;
        int c2 = c / n2;
        cnt += (2 * r2 + c2) * n2 * n2;
        r = r % n2;
        c = c % n2;
    }
    printf("%d\n", cnt);
    return 0;
}
