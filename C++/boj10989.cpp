#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//10989
int N[10100];
int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        N[a]++;
    }
    for(int i = 1; i <= 10000; i++){
        for(int j = 0; j < N[i]; j++)
            printf("%d\n", i);
    }
    return 0;
}
