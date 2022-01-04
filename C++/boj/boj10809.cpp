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
//https://www.acmicpc.net/problem/10809
int main(int argc, char const *argv[]) {
    string s;
    cin >> s;
    for (char c = 'a'; c <= 'z'; c++) {
        int pos = s.find(c);
        if (pos == string::npos)
            pos = -1;
        printf("%d ", pos);
    }
    printf("\n");
    return 0;
}
