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
//https://www.acmicpc.net/problem/1182

vector<int> v;

int rec(int idx, int sum, int answer) {
    int cnt = 0;
    if (idx >= v.size())
        return 0;
    if (v[idx] + sum == answer)
        cnt = 1;
    return cnt + rec(idx + 1, sum, answer) + rec(idx + 1, sum + v[idx], answer);

}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, S;
    scanf("%d %d", &N, &S);
    for (int i = 1; i <= N; ++i) {
        int n;
        scanf("%d", &n);
        v.push_back(n);
    }
    printf("%d\n", rec(0, 0, S));
    return 0;
}
