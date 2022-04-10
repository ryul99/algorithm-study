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
//https://www.acmicpc.net/problem/6749
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", 2 * b - a);
    return 0;
}
