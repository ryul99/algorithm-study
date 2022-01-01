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
//https://www.acmicpc.net/problem/14681
int main(int argc, char const *argv[]) {
    int x, y;
    scanf("%d %d", &x, &y);
    if(y > 0) {
        if(x > 0)
            printf("1\n");
        else
            printf("2\n");
    } else {
        if(x > 0)
            printf("4\n");
        else
            printf("3\n");
    }
    return 0;
}
