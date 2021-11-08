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
//https://www.acmicpc.net/problem/2164
int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    queue<int> q;
    for(int i = 1; i <= n; i++)
        q.push(i);
    while(q.size() > 1) {
        q.pop();
        int h = q.front();
        q.push(h);
        q.pop();
    }
    printf("%d\n", q.front());
    return 0;
}
