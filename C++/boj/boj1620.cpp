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
// boj.kr/1620
int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N, M;
    string s;
    cin >> N >> M;
    vector<string> i2s(N + 10);
    map<string, int> s2i;
    for (int i = 0; i < N; ++i) {
        cin >> s;
        i2s[i + 1] = s;
        s2i[s] = i + 1;
    }
    for (int i = 0; i < M; ++i) {
        cin >> s;
        int num = atoi(s.c_str());
        if (num == 0) {
            cout << s2i[s] << '\n';
        } else {
            cout << i2s[num] << '\n';
        }
    }
    return 0;
}
