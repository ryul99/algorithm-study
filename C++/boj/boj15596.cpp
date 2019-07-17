#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//https://boj.kr/15596
long long sum(std::vector<int> &a){
    long long sum_a = 0;
    for(int i : a){
        sum_a += i;
    }
    return sum_a;
}