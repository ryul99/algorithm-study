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
//https://www.acmicpc.net/problem/5086
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF && (a != 0 && b != 0)) {
        if (a > b && a % b == 0)
            printf("multiple\n");
        else if (a < b && b % a == 0)
            printf("factor\n");
        else
            printf("neither\n");
    }
    return 0;
}
