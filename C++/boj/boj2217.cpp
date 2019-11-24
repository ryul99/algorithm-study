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
//https://www.acmicpc.net/problem/2217
int main(int argc, char const *argv[]) {
    int N, ma = -1;
    vector<int> v;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int n;
        scanf("%d", &n);
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    for(auto a: v){
        ma = max(ma, a * N);
        N--;
    }
    printf("%d\n", ma);
    return 0;
}