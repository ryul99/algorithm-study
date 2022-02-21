#include <cstring>
#include <string>
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
//https://www.acmicpc.net/problem/1181

int compare(const string x, const string y) {
    if (x.size() != y.size())
        return x.size() < y.size();
    return x < y;
}

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    scanf("%d", &N);
    vector<string> v;
    set<string> s;
    for (int i = 0; i < N; ++i) {
        string in;
        cin >> in;
        if (s.find(in) == s.end()) {
            v.push_back(in);
            s.insert(in);
        }
    }
    sort(v.begin(), v.end(), compare);
    for (string str : v)
        cout << str << endl;
    return 0;
}
