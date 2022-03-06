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
//https://www.acmicpc.net/problem/5585
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d", &N);
    N = 1000 - N;
    printf("%d\n", N / 500 + (N % 500) / 100 + (N % 100) / 50 + (N % 50) / 10 + (N % 10) / 5 + (N % 5) / 1);
    return 0;
}
