#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//https://www.acmicpc.net/problem/8958
int main(int argc, char const *argv[]) {
    int T;
    scanf("%d", &T);
    for(int test = 0; test < T; test++){
        char ca[85];
        int score = 0;
        int o_count = 0;
        scanf("%s", ca);
        for(int i = 0; i < strlen(ca); i++){
            if(ca[i] == 'O'){
                o_count++;
                score += o_count;
            }
            else{
                o_count = 0;
            }
        }
        printf("%d\n", score);
    }
    return 0;
}
