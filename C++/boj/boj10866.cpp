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
//https://www.acmicpc.net/problem/10866
int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    int N;
    deque<int> dq;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string str;
        int n;
        cin >> str;
        if (str == "push_front") {
            cin >> n;
            dq.push_front(n);
        } else if (str == "push_back") {
            cin >> n;
            dq.push_back(n);
        } else if (str == "pop_front") {
            if (dq.empty()) 
                cout << -1 << endl;
            else {
                n = dq.front();
                dq.pop_front();
                cout << n << endl;
            }
        } else if (str == "pop_back") {
            if (dq.empty())
                cout << -1 << endl;
            else {
                n = dq.back();
                dq.pop_back();
                cout << n << endl;
            }
        } else if (str == "size") {
            cout << dq.size() << endl;
        } else if (str == "empty") {
            cout << !!dq.empty() << endl;
        } else if (str == "front") {
            if (dq.empty())
                cout << -1 << endl;
            else
                cout << dq.front() << endl;
        } else if (str == "back") {
            if (dq.empty())
                cout << -1 << endl;
            else
                cout << dq.back() << endl;
        }
    }
    return 0;
}
