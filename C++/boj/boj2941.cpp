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
//https://www.acmicpc.net/problem/2941

int check(int ca) {
    if (ca == 24)
        return 2;
    return !!ca;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    char c;
    int ca = 0, cnt = 0;
    while (scanf(" %c", &c) != EOF) {
        if (c == 'c') {
            cnt += check(ca);
            ca = 1;
            continue;
        } else if (c == 'd') {
            cnt += check(ca);
            ca = 2;
            continue;
        } else if (c == 's') {
            cnt += check(ca);
            ca = 3;
            continue;
        } else if (c == 'z') {
            if (ca == 2) {
                ca = 24;
                continue;
            } else {
                cnt += check(ca);
                ca = 4;
                continue;
            }
        } else if (c == 'l') {
            cnt += check(ca);
            ca = 5;
            continue;
        } else if (c == 'n') {
            cnt += check(ca);
            ca = 6;
            continue;
        } else if (c == 'j') {
            if (ca == 5 || ca == 6) {
                ca = 0;
                cnt++;
                continue;
            } else {
                cnt += check(ca);
                ca = 0;
                cnt++;
                continue;
            }
        } else if (c == '=') {
            if (ca == 1 || ca == 24 || ca == 3 || ca == 4) {
                cnt++;
                ca = 0;
                continue;
            } else {
                printf("invalid\n");
            }
        } else if (c == '-') {
            if (ca == 1 || ca == 2) {
                ca = 0;
                cnt++;
                continue;
            }
        } else {
            cnt += 1 + check(ca);
            ca = 0;
            continue;
        }
    }
    printf("%d\n", cnt + check(ca));
    return 0;
}
