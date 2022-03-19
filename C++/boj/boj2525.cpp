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
//https://www.acmicpc.net/problem/2525
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int H, M, m;
    scanf("%d %d %d", &H, &M, &m);
    H += (M + m) / 60;
    H %= 24;
    M = (M + m) % 60;
    printf("%d %d\n", H, M);
    return 0;
}
