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
//https://www.acmicpc.net/problem/1193
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int X, a = 1, b = 1, i = 1;
    bool is_bottom = false;
    // a / b
    scanf("%d", &X);
    while (i < X) {
        if (is_bottom) {
            while (i < X && b != 1) {
                --b;
                ++a;
                ++i;
            }
            if (i < X)
                ++a;
        } else {
            while (i < X && a != 1) {
                --a;
                ++b;
                ++i;
            }
            if (i < X)
                ++b;
        }
        ++i;
        is_bottom = !is_bottom;
    }
    printf("%d/%d\n", a, b);
    return 0;
}
