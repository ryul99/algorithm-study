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
//http://codeforces.com/contest/1191/problem/A
int main(int argc, char const *argv[]) {
    int X;
    scanf("%d", &X);
    char arr[4] = {'D', 'A', 'C', 'B'};
    char m = 'Z';
    int idx = -1;
    for(int i = 0; i < 3; i++){
        if(m > arr[(X + i) % 4]){
            idx = i;
            m = arr[(X + i) % 4];
        }
    }
    printf("%d %c\n", idx, m);
    return 0;
}