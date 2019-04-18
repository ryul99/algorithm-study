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
//10871
int main(int argc, char const *argv[]) {
    int N, X;
    scanf("%d %d", &N, &X);
    for(int i = 0; i < N; i++) {
        int a;
        scanf("%d", &a);
        if(a < X)
            printf("%d ", a);
    }
    return 0;
}
