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
//https://www.acmicpc.net/problem/10808

int arr[30];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    char c;
    while(scanf(" %c", &c) != EOF) {
        arr[c - 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
