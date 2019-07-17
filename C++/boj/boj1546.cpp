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
//1546
int main(int argc, char const *argv[]) {
    int N, m = 0, sum = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int a;
        scanf("%d", &a);
        m = max(m, a);
        sum += a;
    }
    printf("%f\n", float(sum) * 100 / float(N) / float(m));
    return 0;
}
