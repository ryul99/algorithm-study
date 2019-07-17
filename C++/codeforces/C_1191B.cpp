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
//http://codeforces.com/contest/1191/problem/B
int main(int argc, char const *argv[]) {
    map<char, vector<int> > m;
    m['m'] = vector<int>();
    m['p'] = vector<int>();
    m['s'] = vector<int>();
    for(int i = 0; i < 3; i++){
        int n;
        char suite;
        scanf("%d%c", &n, &suite);
        m[suite].push_back(n);
    }
    int r = -1;
    for(auto kv : m){
        if(kv.second.size() < 2){
            r = max(r, int(kv.second.size()));
            continue;
        }
        vector<int> v = kv.second;
        sort(v.begin(), v.end());
        if(v.size() > 2){
            if(v[0] == v[1]){
                if(v[1] == v[2])
                    r = 3;
                else
                    r = max(r, 2);
            }
            else if(v[1] == v[2])
                r = max(r, 2);
            else if(v[0] + 1 == v[1]){
                if(v[1] + 1 == v[2])
                    r = 3;
                else
                    r = max(r, 2);
            }
            else if(v[1] + 1 == v[2])
                r = max(r, 2);
            else if(v[1] - v[0] == 2 || v[2] - v[1] == 2)
                r = max(r, 2);
            else
                r = max(r, 1);
        }
        else {
            if(v[1] - v[0] < 3)
                r = max(r, 2);
            else
                r = max(r, 1);
        }
    }
    printf("%d\n", 3 - r);
    return 0;
}