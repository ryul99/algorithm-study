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
//https://www.acmicpc.net/problem/15964
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    long long A, B;
    scanf("%lld %lld", &A, &B);
    printf("%lld\n", (A + B) * (A - B));
    return 0;
}
