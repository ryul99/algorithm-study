#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
using namespace std;
//2294
int first[3030];//1 == cut / 2 == paste
int second[3030];
long long dp[3030][3030z];
int main(int argc, char const *argv[]) {
    //priority_queue<int, vector<int>, greater<int> > wait;
    int L, N, M;
    int st = 0, nd;
    scanf("%d", &L);
    scanf("%d", &N);
    first = {0,};
    second = {0,};
    int k = 1;
    for(int i = 0; i < N; i++){
        int in;
        scanf("%d", &in);
        if(in == 1){
            first[k] = 1;
            k++;
        }
        else{
            first[k] = 0;
            k++;
            first[k] = 1;
            k++;
        }
    }
    scanf("%d", &M);
    k = 1;
    for(int i = 0; i < N; i++){
        int in;
        scanf("%d", &in);
        if(in == 1){
            second[k] = 1;
            k++;
        }
        else{
            second[k] = 0;
            k++;
            second[k] = 1;
            k++;
        }
    }
    k = 1;
    while(first[k] != 0){
        if(first[k] != second[k])
            st++;
        k++;
    }


    return 0;
}
