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
//https://boj.kr/1712
int main(int argc, char const *argv[]) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if(B >= C){
        printf("-1");
        return 0;
    }
    printf("%d\n", A / (C - B) + 1);
    return 0;
}