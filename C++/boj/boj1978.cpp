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
//https://www.acmicpc.net/problem/1978
int main(int argc, char const *argv[]) {
    int prime_range = 1010;
    int prime_count = 0;
    vector<bool> is_prime(prime_range, true);
    is_prime[0] = false;
    is_prime[1] = false;
    for(int i = 2; i * i <= prime_range; i++){
        if(!is_prime[i]) continue;
        int k = i * i;
        while(k <= prime_range){
            is_prime[k] = false;
            k += i;
        }
    }
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int n;
        scanf("%d", &n);
        if(is_prime[n])
            prime_count++;
    }
    printf("%d\n", prime_count);
    return 0;
}