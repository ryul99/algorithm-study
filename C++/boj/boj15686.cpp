#include <stdio.h>
#include <string.h>
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
//https://www.acmicpc.net/problem/15686

#define EMPTY 0
#define HOUSE 1
#define STORE 2

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N, M, village_cnt = (1 << 31 - 1);
    vector<pair<int, int> > house;
    vector<pair<int, int> > store;
    scanf("%d %d", &N, &M);
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            int n;
            scanf("%d", &n);
            if (n == HOUSE)
                house.push_back(make_pair(i, j));
            else if (n == STORE)
                store.push_back(make_pair(i, j));
        }
    }
    vector<bool> comb(store.size());
    fill(comb.begin(), comb.begin() + M, true);
    do {
        int min_village = 0;
        for (auto h : house) {
            int min_cnt = 500;
            int h_i = h.first;
            int h_j = h.second;
            for (int s_idx = 0; s_idx < store.size(); ++s_idx) {
                if (!comb[s_idx])
                    continue;
                auto s = store[s_idx];
                int s_i = s.first;
                int s_j = s.second;
                int d = abs(h_i - s_i) + abs(h_j - s_j);
                min_cnt = min(min_cnt, d);
            }
            if (min_cnt == 500)
                return EXIT_FAILURE;
            // printf("%d\n", min_cnt);
            min_village += min_cnt;
        }
        village_cnt = min(min_village, village_cnt);
    } while(prev_permutation(comb.begin(), comb.end()));
    printf("%d\n", village_cnt);

    return 0;
}
