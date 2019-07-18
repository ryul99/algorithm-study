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
//http://codeforces.com/contest/1191/problem/C
int main(int argc, char const *argv[]) {
    long long N, K;
    int M;
    vector<long long> special;
    scanf("%lld %d %lld", &N, &M, &K);
    for(int i = 0; i < M; i++){
        long long a;
        scanf("%lld", &a);
        special.push_back(a);
    }
    int erase = 0;
    int count = 0;
    int idx = 0;
    while(idx < special.size()){
        int tmp = erase;
        long long page = (special[idx] - tmp - 1) / K;
        while(idx < special.size() && page == (special[idx] - tmp - 1) / K){
            idx++;
            erase++;
        }
        count++;
    }
    printf("%d\n", count);
    return 0;
}