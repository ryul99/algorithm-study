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
//https://www.acmicpc.net/problem/2501
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0)
            k--;
        if (k == 0) {
            printf("%d\n", i);
            break;
        }
    }
    if (k > 0)
        printf("0\n");
    return 0;
}
