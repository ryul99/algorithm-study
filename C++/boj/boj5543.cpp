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
//https://www.acmicpc.net/problem/5543
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int h = 5000, d = 5000, in;
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &in);
        if (i < 3) {
            h = min(h, in);
        } else {
            d = min(d, in);
        }
    }
    printf("%d\n", h + d - 50);
    return 0;
}
