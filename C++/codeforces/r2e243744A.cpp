#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//https://codeforces.com/group/Qx9a5bDWI5/contest/243744/problem/A

bool lucky_check(int n) {
    while(n){
        if(n % 10 == 8 || n % 10 == -8)
            return true;
        n = n/10;
    }
    return false;
}

int main(int argc, char const *argv[]) {
    int N;
    int ret = 0;
    scanf("%d", &N);
    for(int i = 1 ;; i++){
        if(lucky_check(N + i)){
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}
