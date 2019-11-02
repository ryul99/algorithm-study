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
//https://www.acmicpc.net/problem/10773
int main(int argc, char const *argv[]) {
    stack<int> s;
    int K;
    long long o = 0;
    scanf("%d", &K);
    for(int i = 0; i < K; i++){
        int n;
        scanf("%d", &n);
        if(n == 0)
            s.pop();
        else
            s.push(n);
    }
    while(!s.empty()){
        o += s.top();
        s.pop();
    }
    printf("%lld", o);

    return 0;
}