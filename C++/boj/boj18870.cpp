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
//https://www.acmicpc.net/problem/18870
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d", &N);
    vector<int> v(N);
    vector<int> sorted_v(N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &v[i]);
        sorted_v[i] = v[i];
    }
    sort(sorted_v.begin(), sorted_v.end());
    sorted_v.erase(unique(sorted_v.begin(), sorted_v.end()), sorted_v.end());
    for (int e : v) {
        printf("%ld ", lower_bound(sorted_v.begin(), sorted_v.end(), e) - sorted_v.begin());
    }
    printf("\n");
    return 0;
}
