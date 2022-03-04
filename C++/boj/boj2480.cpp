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
//https://www.acmicpc.net/problem/2480
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    array<int, 3> arr;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    sort(arr.begin(), arr.end());
    if (arr[0] == arr[2])
        printf("%d\n", 10000 + 1000 * arr[0]);
    else if (arr[0] == arr[1] || arr[1] == arr[2])
        printf("%d\n", 1000 + 100 * arr[1]);
    else
        printf("%d\n", arr[2] * 100);
    return 0;
}
