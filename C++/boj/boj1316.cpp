#include <stdio.h>
#include <string.h>
#include <string>
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
//https://www.acmicpc.net/problem/1316

bool c_arr[50];
char s[110];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, cnt = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        char last = 0;
        bool flag = true;
        memset(c_arr, 0, sizeof(c_arr));
        scanf("%s", s);
        for (int s_i = 0; s[s_i] != '\0'; ++s_i) {
            if (last != s[s_i] && c_arr[s[s_i] - 'a' + 1]) {
                flag = false;
                break;
            }
            last = s[s_i];
            c_arr[s[s_i] - 'a' + 1] = true;
        }
        if (flag)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
