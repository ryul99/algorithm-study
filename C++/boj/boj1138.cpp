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

int o[11];
using namespace std;
//https://www.acmicpc.net/problem/1138
int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    vector<int> v;
    for(int i = 0; i < N; i++)
        v.push_back(i);
    for(int i = 0; i < N; i++){
        int n;
        scanf("%d", &n);
        o[v[n]] = i;
        v.erase(v.begin() + n);
    }
    for(int i = 0; i < N; i++)
        printf("%d ", o[i] + 1);
    return 0;
}