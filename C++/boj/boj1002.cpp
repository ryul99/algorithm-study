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
//1002
int main(int argc, char const *argv[]) {
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        int r = (r1 - r2) * (r1 - r2);
        int R = (r1 + r2) * (r1 + r2);
        int D = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        if(D == 0){
            if(r1 == 0 && r2 == 0)
                printf("1\n");
            else if(r1 == r2)
                printf("-1\n");
            else
                printf("0\n");
        }
        else if(r > D)
            printf("0\n");
        else if(r == D)
            printf("1\n");
        else if(R > D)
            printf("2\n");
        else if(R == D)
            printf("1\n");
        else if(R < D)
            printf("0\n");
    }
    return 0;
}
