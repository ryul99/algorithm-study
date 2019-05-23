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
//17252
int main(int argc, char const *argv[]) {
    bool samsam = true;
    int inn;
    scanf("%d", &inn);
    if(inn == 0){
        printf("NO");
        return 0;
    }
    while(inn > 0){
        if(inn % 3 == 2)
            samsam = false;
        inn /= 3;
    }
    if(samsam)
        printf("YES");
    else
        printf("NO");
    return 0;
}
