#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//1110
int main(int argc, char const *argv[]) {
    int N, count = 0;
    scanf("%d", &N);
    int s = N;
    while(true) {
        count++;
        int n = s / 10 + s % 10;
        s = (s % 10) * 10 + n % 10;
        if(N == s)
            break;
    }
    printf("%d\n", count);
    return 0;
}
