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
//https://www.acmicpc.net/problem/2869
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    printf("%d\n", (V - A) / (A - B) + !!((V - A) % (A - B)) + 1);
    return 0;
}
