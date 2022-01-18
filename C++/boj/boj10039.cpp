#include <stdio.h>
#include <string.h>
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
//https://www.acmicpc.net/problem/10039
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int sum = 0, d;
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &d);
        d = max(40, d);
        sum += d;
    }
    printf("%d\n", sum / 5);
    return 0;
}
