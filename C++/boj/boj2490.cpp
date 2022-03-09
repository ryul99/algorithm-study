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
//https://www.acmicpc.net/problem/2490
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    char arr[5] = {'D', 'C', 'B', 'A', 'E'};
    int n;
    for (int i = 0; i < 3; ++i) {
        int sum = 0;
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &n);
            sum += n;
        }
        printf("%c\n", arr[sum]);
    }
    return 0;
}
