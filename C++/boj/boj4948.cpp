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
//https://www.acmicpc.net/problem/4948
int main(int argc, char const *argv[]) {
    vector<bool> isPrime(300000, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= 2 * 123456; i++){
        if(!isPrime[i]) continue;
        int k = i * i;
        while(k <= 2 * 123456){
            isPrime[k] = false;
            k += i;
        }
    }
    int n;
    while(true){
        scanf("%d", &n);
        if(n == 0)
            break;
        int c = 0;
        for(int i = n + 1; i <= 2 * n; i++){
            if(isPrime[i])
                c++;
        }
        printf("%d\n", c);
    }
    return 0;
}