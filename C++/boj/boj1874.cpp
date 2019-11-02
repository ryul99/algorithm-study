#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//https://www.acmicpc.net/problem/1874

int main(int argc, char const *argv[]) {
    char out[200200];
    int N;
    scanf("%d", &N);
    stack<int> s;
    int stackIdx = 0;
    int outIdx = 0;
    for(int i = 0; i < N; i++){
        int n;
        scanf("%d", &n);
        if(stackIdx < n){
            for(int j = stackIdx + 1; j <= n; j++){
                s.push(j);
                out[outIdx] = '+';
                outIdx++;
            }
            s.pop();
            out[outIdx] = '-';
            outIdx++;
            stackIdx = n;
        }
        else if(!s.empty() && n == s.top()){
            s.pop();
            out[outIdx] = '-';
            outIdx++;
        }
        else{
            printf("NO\n");
            return 0;
        }
    }
    for(int i = 0; i < outIdx; i++){
        printf("%c\n", out[i]);
    }
    return 0;
}