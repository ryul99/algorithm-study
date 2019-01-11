#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
using namespace std;
//10817
int main(int argc, char const *argv[]) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[] = {a, b, c};
    sort(arr, arr+3);
    printf("%d", arr[1]);
    return 0;
}
