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
//https://www.acmicpc.net/problem/1654

int check(vector<int> &v, int l) {
    int cnt = 0;
    for (int e : v) {
        cnt += e / l;
    }
    return cnt;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int K, N, ori_max = 0;
    vector<int> v;
    scanf("%d %d", &K, &N);
    for (int i = 0; i < K; ++i) {
        int a;
        scanf("%d", &a);
        v.push_back(a);
        ori_max = max(ori_max, a);
    }

    int begin = 1, end = ori_max + 1;
    while (begin + 1 < end) {
        int mid = (begin + end) / 2;
        if (N <= check(v, mid))
            begin = mid;
        else
            end = mid;
        // printf("%d %d %d\n", begin, mid, end);
    }
    printf("%d\n", end - 1);
    return 0;
}
