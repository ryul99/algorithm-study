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
//https://www.acmicpc.net/problem/2475
int main(int argc, char const *argv[]) {
    int a[5];
    int result = 0;
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    for(int i : a){
        result += (i * i);
    }
    printf("%d\n", result % 10);
    return 0;
}