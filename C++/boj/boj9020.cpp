#include <cstring>
#include <string>
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
//https://www.acmicpc.net/problem/9020

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    set<int> prime = {2};
    for (int i = 3; i < 10000; ++i) {
        bool is_prime = true;
        for (int j : prime) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            prime.insert(i);
    }
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        int N, a = -1, b = -1;
        scanf("%d", &N);
        for (int p : prime) {
            if (p > N / 2)
                break;
            if (prime.find(N - p) != prime.end()) {
                a = p;
                b = N - p;
            }
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}
