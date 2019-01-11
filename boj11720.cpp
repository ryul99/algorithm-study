#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
using namespace std;
//11720
int main(int argc, char const *argv[]) {
    int N;
    int ret = 0;
    char d;
    scanf("%d", &N);
    scanf("%c", &d);
    for(int i = 0; i < N; i++){
        char a;
        scanf("%c", &a);
        ret+=a&15;
    }
    printf("%d", ret);
    return 0;
}
