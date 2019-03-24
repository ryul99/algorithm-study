#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <list>
using namespace std;
//2504
int po(int n){
    if(n == 0)
        return 1;
    return 3 * po(n - 1);
}

int main(int argc, char const *argv[]) {
    int n = 0;
    int m = 0;
    int dc = 0;
    list<int> l;
    long long re = 0;
    int check = 0;
    char c;
    while(fread(&c, 1, 1, stdin) > 0){
        if(c == '('){
            ++n;
            dc = 0;
            l.push_back(0);
            check = 0;
        }
        else if(c == '['){
            ++m;
            dc = 1;
            l.push_back(1);
            check = 0;
        }
        else if(c == ')'){
            if(l.size() == 0 || l.back() == 1){
                printf("0");
                return 0;
            }
            l.pop_back();
            if(l.back() == '(')
                re += (1 << n) * po(m);
            else{
                if(check == 0)
                    re += (1 << n) * po(m);
            }
            --n;
            check = 1;
        }
        else if(c == ']'){
            if(l.size() == 0 || l.back() == 0){
                printf("0");
                return 0;
            }
            l.pop_back();
            if(l.back() == '[')
                re += (1 << n) * po(m);
            else{
                if(check == 0)
                    re += (1 << n) * po(m);
            }
            --m;
            check = 1;
        }
    }
    if(n + m > 0){
        printf("0");
        return 0;
    }
    printf("%lld", re);
    return 0;
}
