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
//https://www.acmicpc.net/problem/2581
int main(int argc, char const *argv[]) {
    int Max = 10100;
    int N, M, S=0, firstPrime = -1;
    vector<bool> isPrime(Max, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= Max; i++){
        if(!isPrime[i]) continue;
        int k = i * i;
        while(k <= Max){
            isPrime[k] = false;
            k += i;
        }
    }
    scanf("%d\n%d", &N, &M);
    for(int i = N; i <= M; i++){
        if(isPrime[i]){
            S += i;
            if(firstPrime == -1)
                firstPrime = i;
        }
    }
    if(firstPrime == -1)
        printf("-1\n");
    else
        printf("%d\n%d\n", S, firstPrime);
    return 0;
}