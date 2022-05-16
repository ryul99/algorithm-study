#include <cstring>
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
//https://www.acmicpc.net/problem/1159

int al[30];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    bool check = false;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        al[s.c_str()[0] - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; ++i) {
        if (al[i - 'a'] >= 5) {
            printf("%c", i);
            check = true;
        }
    }
    if (!check)
        printf("PREDAJA");
    printf("\n");
    return 0;
}
