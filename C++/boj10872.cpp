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
//https://boj.kr/10872
int main(int argc, char const *argv[]) {
    int N;
    long long N_p = 1;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        N_p *= i;
    }
    printf("%lld\n", N_p);
    return 0;
}