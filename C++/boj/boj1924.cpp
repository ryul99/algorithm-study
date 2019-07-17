#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
using namespace std;
//1924
int main(int argc, char const *argv[]) {
    int m, n;
    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string day[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    scanf("%d %d", &m, &n);
    int ret = 0;
    for(int i = 0; i < m-1; i++){
        ret += month[i];
    }
    ret += n;
    printf("%s", day[ret%7].c_str());
    return 0;
}
