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
//https://www.acmicpc.net/problem/1759

char char_arr[20];
    
int main(int argc, char const *argv[]) {
    int L, C;
    scanf("%d %d\n", &L, &C);
    vector<bool> comb(C);
    fill(comb.begin(), comb.begin() + L, true);
    string str("");
    vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < C; i++) {
        scanf(" %c", &char_arr[i]);
    }
    for (int i = 0; i < C; i++) {
        str.push_back(char_arr[i]);
    }
    sort(str.begin(), str.end());
    // cout << str << endl;
    // printf("%s\n", str.c_str());
    do {
        string origin("");
        for (int i = 0; i < C; ++i) {
            if (comb[i]) {
                origin.push_back(str[i]);
            }
        }
        string sorted(origin.c_str());
        // printf("1\n");
        // printf("%s %s\n", origin.c_str(), str.c_str());
        sort(sorted.begin(), sorted.end());
        if (sorted != origin)
            break;
        // printf("2\n");
        int vowel_cnt = 0;
        for (char v : vowel)
            vowel_cnt += !!(origin.find(v) != string::npos);
        if (vowel_cnt < 1)
            continue;
        if (strlen(origin.c_str()) - vowel_cnt < 2)
            continue;
        printf("%s\n", origin.c_str());
    } while (prev_permutation(comb.begin(), comb.end()));
    return 0;
}
