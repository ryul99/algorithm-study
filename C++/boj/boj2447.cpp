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
//https://www.acmicpc.net/problem/2447

string output[7000];

void rec(int r, int size) {
    if (size <= 3) {
        output[r] += "***";
        output[r + 1] += "* *";
        output[r + 2] += "***";
        return;
    }
    // 1
    rec(r, size / 3);
    rec(r, size / 3);
    rec(r, size / 3);
    // 2
    rec(r + size/3, size / 3);
    for (int i = 0; i < size/3; ++i) {
        for (int j = 0; j < size/3; ++j)
            output[r + size/3 + i] += " ";
    }
    rec(r + size / 3, size / 3);
    // 3
    rec(r + 2 * size / 3, size / 3);
    rec(r + 2 * size / 3, size / 3);
    rec(r + 2 * size / 3, size / 3);
    return;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int n;
    scanf("%d", &n);
    rec(0, n);
    for (int i = 0; i < n; ++i) {
        printf("%s\n", output[i].c_str());
    }
    return 0;
}
