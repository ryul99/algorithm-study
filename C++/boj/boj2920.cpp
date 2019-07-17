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
//2920
int main(int argc, char const *argv[]) {
    bool aB = true;
    bool dB = true;
    for(int i = 1; i < 9; i++){
        int a;
        scanf("%d", &a);
        if(a != i)
            aB = false;
        if(a != 9 - i)
            dB = false;
    }
    aB ? printf("ascending\n") : (dB ? printf("descending\n") : printf("mixed\n"));
    return 0;
}
