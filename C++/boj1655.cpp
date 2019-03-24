#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
//1655
int main(int argc, char const *argv[]) {
    int N, input, mid;
    set<int> s;
    set<int>::const_iterator pos;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", &input);
        s.insert(input);
        if(i == 1){
            printf("%d\n", input);
            mid = input;
        }
        else if(i % 2 == 0 && mid < input)
            printf("%d\n", mid);
        else if(i % 2 == 1 && mid > input)
            printf("%d\n", mid);
        else{
            pos = s.begin();
            advance(pos,i/2);
            printf("%d\n", *pos);
            mid = *pos;
        }
    }
    return 0;
}
