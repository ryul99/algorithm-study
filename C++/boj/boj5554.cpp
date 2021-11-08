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
//https://www.acmicpc.net/problem/5554
int main(int argc, char const *argv[]) {
    int a,b,c,d;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    printf("%d\n%d\n", (a+b+c+d) / 60, (a+b+c+d) % 60);
    return 0;
}
