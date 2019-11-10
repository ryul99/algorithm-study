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
//https://www.acmicpc.net/problem/4153
int main(int argc, char const *argv[]) {
    while(true){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int m = max(max(a, b), c);
        if(!a || !b || !c) break;
        if(a * a + b * b + c * c == 2 * m * m)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}