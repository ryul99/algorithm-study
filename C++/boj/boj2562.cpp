#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;
//https://www.acmicpc.net/problem/2562
int main(int argc, char const *argv[]) {
    int idx = 0, max_num = -1;
    for (int i = 1; i < 10; i++) {
        int n;
        scanf("%d", &n);
        if (n > max_num) {
            max_num = n;
            idx = i;
        }
    }
    printf("%d\n%d\n", max_num, idx);
    return 0;
}