#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//https://codeforces.com/group/Qx9a5bDWI5/contest/243743/problem/A
int main(int argc, char const *argv[]) {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    if(k % 2)
        printf("%d %d L\n", ((k + 1)/2 - 1)/m + 1, ((k + 1)/2 - 1)%m + 1);
    else
        printf("%d %d R\n", ((k + 1)/2 - 1)/m + 1, ((k + 1)/2 - 1)%m + 1);
    return 0;
}
