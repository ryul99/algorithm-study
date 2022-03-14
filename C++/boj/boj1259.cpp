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
//https://www.acmicpc.net/problem/1259
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    while (scanf("%d", &N) > 0 && N > 0) {
        if (N / 10000) {
            if (N / 10000 == N % 10 && N % 10000 / 1000 == N % 100 / 10)
                printf("yes\n");
            else
                printf("no\n");
        } else if (N / 1000) {
            if (N / 1000 == N % 10 && N % 1000 / 100 == N % 100 / 10)
                printf("yes\n");
            else
                printf("no\n");
        } else if (N/ 100) {
            if (N / 100 == N % 10)
                printf("yes\n");
            else
                printf("no\n");
        } else if (N / 10) {
            if (N / 10 == N % 10)
                printf("yes\n");
            else
                printf("no\n");
        } else {
            printf("yes\n");
        }
    }
    return 0;
}
