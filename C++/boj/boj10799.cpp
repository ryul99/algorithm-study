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
//https://www.acmicpc.net/problem/10799

char input[100100];

int main(int argc, char const *argv[]) {
    //ios_base::sync_with_stdio(false)
    scanf("%s", input);
    int cnt = 0;
    int answer = 0;
    for (int i = 0; input[i] != '\0'; ++i) {
        // printf("%d ", i);
        if (input[i] == '(') {
            if (input[i + 1] == ')') {
                // printf("%d ", cnt);
                answer += cnt;
                i++;
            } else {
                cnt++;
            }
        } else {
            cnt--;
            answer++;
        }
    }
    printf("%d\n", answer);
    return 0;
}
