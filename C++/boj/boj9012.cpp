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
//https://www.acmicpc.net/problem/9012
int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        char *s;
        scanf("%ms", &s);
        int j = 0;
        int count = 0;
        while(s[j] != '\0') {
            if(s[j] == '(')
                count++;
            else if(s[j] == ')') {
                count--;
                if(count < 0) {
                    break;
                }
            }
            else {
                printf("ERROR: %c\n", s[j]);
            }
            j++;
        }
        if(count == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
