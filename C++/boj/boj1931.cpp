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
//https://www.acmicpc.net/problem/1931
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, a, b, cnt = 0;
    vector<pair<int, int> > v;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &a, &b);
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < N;) {
        int begin = v[i].first;
        int end = v[i].second;
        bool is_worth = true;
        int j = i + 1;
        for (;j < N && end > v[j].first; ++j) {
            if (end > v[j].second) {
                is_worth = false;
                break;
            }
        }
        i = j;
        if (is_worth) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
