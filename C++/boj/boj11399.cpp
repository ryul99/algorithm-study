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
//11399
int main(int argc, char const *argv[]) {
    vector<int> v;
    int N;
    int waitTime = 0;
    int all = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int a;
        scanf("%d", &a);
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++){
        waitTime += v[i];
        all += waitTime;
    }
    printf("%d", all);
    return 0;
}
