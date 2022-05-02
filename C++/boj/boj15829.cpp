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
//https://www.acmicpc.net/problem/15829
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int L;
    char c;
    long long hash = 0;
    scanf("%d", &L);
    for (int i = 0; i < L; ++i) {
        scanf(" %c", &c);
        long long add = (c - 'a' + 1);
        for (int j = 0; j < i; ++j)
            add = (add * 31) % 1234567891;
        hash = (hash + add) % 1234567891;
        // printf("%lld, %lld\n", add, hash);
    }
    printf("%lld\n", hash);
    return 0;
}
