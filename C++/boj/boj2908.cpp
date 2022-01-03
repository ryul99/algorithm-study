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
//https://www.acmicpc.net/problem/2908
int main(int argc, char const *argv[]) {
    int a, b;
    string a_str, b_str;
    cin >> a_str >> b_str;
    reverse(a_str.begin(), a_str.end());
    reverse(b_str.begin(), b_str.end());
    a = atoi(a_str.c_str());
    b = atoi(b_str.c_str());
    int result = a > b ? a : b;
    printf("%d\n", result);
    return 0;
}
