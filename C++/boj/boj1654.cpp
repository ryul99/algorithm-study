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

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int K, N;
    long long begin, end = 0;
    scanf("%d %d", &K, &N);
    vector<long long> v(K);
    for (int i = 0; i < K; ++i) {
        scanf("%lld", &v[i]);
        end = max(end, v[i]);
    }
    // search
    begin = 1;
    end = end + 1;
    while (begin < end - 1) {
        long long mid = (begin + end) / 2;
        int cnt = 0;
        for (long long l : v) {
            if (cnt > 1000100 || cnt < 0) {
                cnt = 1000100;
                break;
            }
            cnt += l / mid;
        }
        if (cnt < N) {
            end = mid;
            continue;
        } else {
            begin = mid;
            continue;
        }
    }
    printf("%lld\n", begin);
}