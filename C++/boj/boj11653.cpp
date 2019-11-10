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
//https://www.acmicpc.net/problem/11653
int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    for(int i = 2; i * i <= N; i++){
        if(N % i) continue;
        while(N % i == 0){
            printf("%d\n", i);
            N /= i;
        }
    }
    if(N != 1)
        printf("%d\n", N);
    return 0;
}