#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <vector>
#include <math.h>
#include <utility>

using namespace std;
bool inside(pair<int, int> p, int a){
    return (p.first<=a)&&(a<=p.second);
}

int main()
{
    int TN;
    scanf("%d", &TN);
    for(int Q = 0; Q < TN; Q++){//each test case
        int BN;
        int caseN;
        vector<int> coun;
        vector < pair < int, int> > bus;
        scanf("%d", &BN);
        for(int i = 0; i < BN; i++){ //scan bus
            int first, second;
            scanf("%d %d", &first, &second);
            bus.push_back(make_pair(first,second));
        }
        //sort(bus.begin(), bus.end());
        scanf("%d", &caseN);
        for(int i = 0; i < caseN; i++){
            int city;
            int cou = 0;
            scanf("%d", &city);
            for(int j = 0; j < bus.size(); j++){
                cou+=inside(bus[j],city);
            }
            coun.push_back(cou);
        }
        printf("Case #%d: ", Q+1);
        for(int i = 0; i < coun.size(); i++)
            printf("%d ",coun[i]);
        printf("\n");
    }
    return 0;
}
