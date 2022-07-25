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
//https://www.acmicpc.net/problem/1436

int cursedNumber(int N) {
    int number_cnt = 0;
    int digit_cursed_cnt = 0;
    for (int i = 0; i < 10000666; ++i) {
        digit_cursed_cnt = 0;
        for (int j = i; j > 0; j = j / 10) {
            if (j % 10 == 6)
                digit_cursed_cnt++;
            else
                digit_cursed_cnt = 0;
            if (digit_cursed_cnt == 3) {
                number_cnt++;
                break;
            }
        }
        if (number_cnt == N)
            return i;
    }
    return -1;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d", &N);
    printf("%d\n", cursedNumber(N));
    return 0;
}
