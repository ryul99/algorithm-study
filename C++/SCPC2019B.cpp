#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

double PI = 3.14159265;

using namespace std;
//
double Answer;

int main(int argc, char** argv)
{
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */	

	// freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0.0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		int R, S, E;
		scanf("%d %d %d", &R, &S, &E);
		int N;
		scanf("%d", &N);
		Answer = E - S - 2 * R * N;
		for(int i = 0; i < N; i++){
			int l, r, h;
			scanf("%d %d %d", &l, &r, &h);
			if(h >= R){
				Answer += 2 * (h - R);
				Answer += PI * R;
			}
			else{
				Answer += acos(double(R - h) / double(R + h)) * R * 2;
			}
		}
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}