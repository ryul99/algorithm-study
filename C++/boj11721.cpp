#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
using namespace std;
//11721
int main(int argc, char const *argv[]) {
    char c;
    int r = 0;
    while(~scanf("%c", &c)){
        r++;
        printf("%c", c);
        if(r == 10){
            printf("\n");
            r = 0;
        }
    }
    return 0;
}
