#include <stdio.h>
#include <string.h>
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
//https://www.acmicpc.net/problem/4344
int main(int argc, char const *argv[]) {
    int T;
    int score[1010];
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        int N;
        float over = 0;
        scanf("%d", &N);
        float total = 0.0;
        for(int j = 0; j < N; j++) {
            scanf("%d", &score[j]);
            total += (float) score[j];
        }
        total /= (float) N;
        for(int j = 0; j < N; j++)
            if(score[j] > total)
                over++;
        printf("%2.3f%%\n", 100 * over / (float) N);
    }
    return 0;
}
