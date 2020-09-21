#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;
//https://www.acmicpc.net/problem/2675
int main(int argc, char const *argv[]) {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int R;
        char S[25];
        scanf("%d %s", &R, S);
        for (int j = 0; j < 25; j++) {
            if (S[j] == '\0')
                break;
            for (int k = 0; k < R; k++)
                printf("%c", S[j]);
        }
        printf("\n");
    }
    return 0;
}