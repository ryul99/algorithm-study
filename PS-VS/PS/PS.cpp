#include <stdio.h>
#include <algorithm>
#include <functional>
#include <vector>
#include <math.h>

using namespace std;
//
//int gcd(int a, int b){
//    for(;;){
//        if(a == 0) return b;
//        b%=a;
//        if(b == 0) return a;
//        a%=b;
//    }
//}
//
//int gcd(vector<int> k){
//    int a=0;
//    for(int i = 0; i < k.size(); i++){
//        a=gcd(a,k[i]);
//    }
//    return a;
//}
//
//int lcm(int a, int b){
//    return a/gcd(a,b)*b;
//}
//
//int lcm(vector<int> in){
//    int lc = in[0];
//        for(int i = 1; i < in.size(); i++){
//            lc=lcm(lc,in[i]);
//        }
//    return lc;
//}


int lcm(vector< vector < int > > in, vector<int> es) {
	vector<int> lc(in[0]);
	for (int i = 1; i < in.size(); i++) {
		vector<int> ld;
		while (!lc.empty() && !in[i].empty()) {
			if (lc[0] == in[i][0]) {
				ld.push_back(lc[0]);
				lc.erase(lc.begin());
				in[i].erase(in[i].begin());
			}
			else if (lc[0]>in[i][0])
				in[i].erase(in[i].begin());
			else
				lc.erase(lc.begin());
		}
		lc.swap(ld);
		if (lc.empty())
			return 1000;
	}
	sort(es.begin(), es.end(), greater<int>());
	int ese = es[0];
	while (!lc.empty() && ese / 10>lc[0])
		lc.erase(lc.begin());
	if (lc.empty())
		return 1000;
	return lc[0];
}

int main()
{
	vector < int > record[1000];
	record[0].push_back(1);
	for (int i = 2; i <= 1000; i++) {
		for (int k = 1; k <= i * 10; k++) {
			int j = (int)(1.0*k / i * 1000) % 1000;
			if (k%i == 0) {
				j = (int)(10000.0 / i)*k / 10;
			}
			record[j].push_back(i);
		}
	}
	vector< vector < int > > in;
	vector<int> es;
	vector<int> de;
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int ess, des;
		scanf("%d.%d", &ess, &des);
		es.push_back(ess);
		de.push_back(des);
		//        printf("%d",j);
	}
	//    printf("\n");
	for (int i = 0; i < N; i++) {
		in.push_back(record[de[i]]);
	}
	int lc = lcm(in, es);
	printf("%d", lc);
}
