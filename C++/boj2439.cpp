#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
using namespace std;
//2439
int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            printf(" ");
        }
        for(int j = n-i-1; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
