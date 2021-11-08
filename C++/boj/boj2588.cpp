#include <stdio.h>
#include <string.h>
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
//https://www.acmicpc.net/problem/2588
int main(int argc, char const *argv[]) {
    int a, b;
    scanf("%d %d", &a, &b);
    int temp = b;
    for(int i = 0; i < 3; i++) {
        int l = temp % 10;
        temp /= 10;
        printf("%d\n", a * l);
    }
    printf("%d\n", a * b);
    return 0;
}
