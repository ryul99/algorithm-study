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

int arr[110][110];
using namespace std;
//http://codeforces.com/group/Qx9a5bDWI5/contest/245921/problem/A
int main(int argc, char const *argv[]) {
    int N, M, Q;
    scanf("%d %d %d", &N, &M, &Q);
    vector<pair<int, int> > v;
    for(int i = 0; i < Q; i++){
        int op;
        scanf("%d", &op);
        if(op == 1 || op == 2){
            int r;
            scanf("%d", &r);
            v.push_back(make_pair(op, r));
        }
        else{
            int r, c, x;
            scanf("%d %d %d", &r, &c, &x);
            r -= 1;
            c -= 1;
            for(auto iter = v.rbegin(); iter != v.rend(); iter ++){
                if((*iter).first == 1 && r == (*iter).second - 1){
                    c++;
                    c %= N;
                }
                else if((*iter).first == 2 && c == (*iter).second - 1){
                    r++;
                    r %= M;
                }
            }
            r += 1;
            c += 1;
            arr[r][c] = x;
        }
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}