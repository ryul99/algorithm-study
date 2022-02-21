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
//https://www.acmicpc.net/problem/2309
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    vector<int> height(9);
    int sum = 0, x, y;
    for (int i = 0; i < 9; ++i) {
        scanf("%d", &height[i]);
        sum += height[i];
    }
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < i; ++j) {
            if (height[i] + height[j] == sum - 100) {
                x = i;
                y = j;
            }
        }
    }
    height[x] = 0;
    height[y] = 0;
    sort(height.begin(), height.end());
    for (int i = 2; i < 9; ++i)
        printf("%d\n", height[i]);
    return 0;
}
