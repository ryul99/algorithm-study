#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//1094
int main(int argc, char const *argv[]) {
    int X, count = 0, temp;
    scanf("%d", &X);
    temp = X;
    while(temp){
        count += temp & 1;
        temp = temp >> 1;
    }
    printf("%d", count);
    return 0;
}
