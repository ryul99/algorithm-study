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
//1065
int main(int argc, char const *argv[]) {
    int N, count = 0;
    int ta[4] = {-1, -1, -1, -1};
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        int j = 0;
        int n = i;
        while(n / 10 != 0){
            ta[j] = n % 10;
            j++;
            n /= 10;
        }
        ta[j] = n % 10;
        count += ta[1] == -1 || (ta[3] == -1 || ta[3] - ta[2] == ta[2] - ta[1]) && (ta[2] == -1 || ta[2] - ta[1] == ta[1] - ta[0]);
        ta[0] = ta[1] = ta[2] = ta[3] = -1;
    }
    printf("%d", count);
    return 0;
}
