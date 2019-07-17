#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//https://boj.kr/3052
int main(int argc, char const *argv[]) {
    unordered_set<int> s;
    for(int i = 0; i < 10; i++){
        int a;
        scanf("%d", &a);
        s.insert(a % 42);
    }
    printf("%d\n", int(s.size()));
    return 0;
}