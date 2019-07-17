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
//2577
int main(int argc, char const *argv[]) {
    int arr[10] = {0,};
    int A, B, C;
    scanf("%d\n%d\n%d", &A, &B, &C);
    int o = A * B * C;
    while(o){
        arr[o % 10]++;
        o = o / 10;
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
