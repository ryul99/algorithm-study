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
//https://codeforces.com/group/Qx9a5bDWI5/contest/243743/problem/C
int main(int argc, char const *argv[]) {
    int Q;
    scanf("%d", &Q);
    for(int q = 0; q < Q; q++){
        int n;
        scanf("%d", &n);
        if(n % 4 == 0 || n % 4 == 2){
            if(n/4 > n % 4 - 2)
                printf("%d\n", n/4);
            else
                printf("-1\n");
        }
        else if(n % 4 == 1){
            if(n/4 > 1)
                printf("%d\n", n/4 - 1);
            else
                printf("-1\n");
        }
        else{
            if(n/4 > 2)
                printf("%d\n", n/4 - 1);
            else
                printf("-1\n");
        }
    }
    return 0;
}
