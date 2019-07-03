#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>


using namespace std;
//https://boj.kr/2750
int main(int argc, char const *argv[]) {
    int N;
    vector<int> v;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int a;
        scanf("%d", &a);
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int a: v){
        printf("%d\n", a);
    }
    return 0;
}