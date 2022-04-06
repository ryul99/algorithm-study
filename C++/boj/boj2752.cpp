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
//https://www.acmicpc.net/problem/2752
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    vector<int> v(3);
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    for (int e : v) {
        printf("%d ", e);
    }
    printf("\n");
    return 0;
}
