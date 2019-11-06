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
//https://www.acmicpc.net/problem/1927
int main(int argc, char const *argv[]) {
    priority_queue< int, vector<int>, greater<int> > pq;
    int N;
    scanf("%d", &N);
    for(int tc = 0; tc < N; tc++){
        int n;
        scanf("%d", &n);
        if(n == 0){
            if(pq.empty()){
                printf("0\n");
            }
            else{
                printf("%d\n", pq.top());
                pq.pop();
            }
        }
        else{
            pq.push(n);
        }
    }
    return 0;
}