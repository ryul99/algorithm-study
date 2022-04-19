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
//https://www.acmicpc.net/problem/1100
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    bool is_white = true;
    int cnt = 0;
    for (int i = 0; i < 8; ++i) {
        char str[10];
        scanf("%s", str);
        for (int j = 0; j < 8; ++j) {
            if (is_white && str[j] == 'F') {
                cnt++;
            }
            is_white = !is_white;
        }
        is_white = !is_white;
    }
    printf("%d\n", cnt);
    return 0;
}
