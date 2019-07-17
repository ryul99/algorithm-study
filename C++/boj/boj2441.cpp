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
//2441
int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++)
            printf(" ");
        for(int j = 0; j < N - i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
