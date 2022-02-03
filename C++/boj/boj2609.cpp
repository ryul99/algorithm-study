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
//https://www.acmicpc.net/problem/2609
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int a, b, r, lcm;
    scanf("%d %d", &a, &b);
    lcm = a * b;
    do {
        r = a % b;
        a = b;
        b = r;
    } while(r != 0);
    printf("%d\n%d\n", a, lcm / a);
    return 0;
}
