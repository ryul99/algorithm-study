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
//https://www.acmicpc.net/problem/1427
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    vector<char> arr;
    char c;
    while (scanf(" %c", &c) != EOF) {
        arr.push_back(c);
    }
    sort(arr.begin(), arr.end(), greater<char>());
    for (char c : arr)
        printf("%c", c);
    printf("\n");
    return 0;
}
