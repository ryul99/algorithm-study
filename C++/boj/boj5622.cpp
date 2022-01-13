#include <stdio.h>
#include <string.h>
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
//https://www.acmicpc.net/problem/5622

int alp[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int cnt = 0;
    char c;
    while(scanf(" %c", &c) != EOF) {
        cnt += alp[c - 'A'];
    }
    printf("%d\n", cnt);
    return 0;
}
