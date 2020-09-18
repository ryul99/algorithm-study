#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;
//https://www.acmicpc.net/problem/1330
int main(int argc, char const *argv[]) {
    int A, B;
    scanf("%d %d", &A, &B);
    if (A > B)
        printf(">");
    else if (A == B)
        printf("==");
    else
        printf("<");
    return 0;
}