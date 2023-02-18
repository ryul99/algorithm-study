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
// boj.kr/11723

bool arr[22];

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        string s;
        int x;
        cin >> s;
        if (s == "add") {
            cin >> x;
            arr[x] = true;
        } else if (s == "remove") {
            cin >> x;
            arr[x] = false;
        } else if (s == "check") {
            cin >> x;
            cout << arr[x] << '\n';
        } else if (s == "toggle") {
            cin >> x;
            arr[x] = ! arr[x];
        } else if (s == "all") {
            memset(arr, 1, sizeof(arr));
        } else if (s == "empty") {
            memset(arr, 0, sizeof(arr));
        } else {
            cout << "Unreachable case\n";
        }
    }
    return 0;
}
