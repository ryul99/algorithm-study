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
//https://www.acmicpc.net/problem/3036
int gcd(int a, int b){
    for(;;){
        if(a == 0) return b;
        b %= a;
        if(b == 0) return a;
        a %= b;
    }
}

int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    int before;
    int before_roll_upper = 1;
    int before_roll_lower = 1;
    for(int i = 0; i < N; i++){
        int n;
        scanf("%d", &n);
        if(i > 0){
            int g = gcd(before * before_roll_upper, n * before_roll_lower);
            before_roll_upper = before_roll_upper * before / g;
            before_roll_lower = before_roll_lower * n / g;
            printf("%d/%d\n", before_roll_upper, before_roll_lower);
        }
        before = n;
    }
    return 0;
}