#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;
//https://www.acmicpc.net/problem/1992

int check_value(int arr[][100], int left, int top, int right, int bottom) {
    int val = arr[left][top];
    for (int i = left; i < right; i++)
        for (int j = top; j < bottom; j++)
            if (arr[i][j] != val)
                return -1;
    return val;
}

string compress(int arr[][100], int left, int top, int right, int bottom) {
    int val = check_value(arr, left, top, right, bottom);
    if (val != -1)
        return to_string(val);
    int mid_h = (left + right) / 2;
    int mid_v = (top + bottom) / 2;
    return "(" + compress(arr, left, top, mid_h, mid_v) + compress(arr, mid_h, top, right, mid_v) + compress(arr, left, mid_v, mid_h, bottom) + compress(arr, mid_h, mid_v, right, bottom) + ")";
}

int main(int argc, char const* argv[]) {
    int N;
    int arr[100][100];
    char c;

    scanf("%d", &N);
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            arr[i][j] = -2;
    scanf("%c", &c);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%c", &c);
            arr[j][i] = c - '0';
        }
        scanf("%c", &c);
    }
    printf("%s", compress(arr, 0, 0, N, N).c_str());
    return 0;
}