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
//https://www.acmicpc.net/problem/3009

int x[2];
int y[2];
    
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int X = -1, Y = -1;
    for (int i = 0; i < 3; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (i < 2) {
            x[i] = a;
            y[i] = b;
        } else {
            if (x[0] == x[1])
                X = a;
            else
                X = x[0] + x[1] - a;
            if (y[0] == y[1])
                Y = b;
            else
                Y = y[0] + y[1] - b;
        }
    }
    printf("%d %d\n", X, Y);
    return 0;
}
