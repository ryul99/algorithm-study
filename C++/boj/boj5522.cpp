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
//https://www.acmicpc.net/problem/5522
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int cnt = 0, a;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a);
        cnt += a;
    }
    printf("%d\n", cnt);
    return 0;
}
