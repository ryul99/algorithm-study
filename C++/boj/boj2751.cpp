#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
// boj.kr/2751
int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    vector<int> v;
    for(int i = 0; i < N; i++){
        int n;
        scanf("%d", &n);
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++)
        printf("%d\n", v[i]);
    return 0;
}
