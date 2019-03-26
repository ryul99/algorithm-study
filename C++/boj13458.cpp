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
//13458
int main(int argc, char const *argv[]) {
    int N, B, C;
    long long count = 0;
    vector<int> classroom;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int stN;
        scanf("%d", &stN);
        classroom.push_back(stN);
    }
    scanf("%d %d", &B, &C);
    for(int i = 0; i < N; i++){
        count++;
        count += (classroom[i] - B > 0) ? (classroom[i] - B - 1)/C + 1 : 0 ;
    }
    printf("%lld", count);
    return 0;
}
