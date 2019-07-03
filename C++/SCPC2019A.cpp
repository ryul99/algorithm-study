#include <cstdio>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;
//SCPC2019A
int dp[1000100];
int dpT[1000100];
int Answer;

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
    for(int i = 2; i <= 1000010; i++){
        if(i % 2 == 0){
            dp[i] = dp[i/2] + 1;
        }
        else{
            dp[i] = dp[(i + 1)/2] + 2;
        }
    }
    for(int i = 1; i <= 1000000; i++){
        dpT[i] = dpT[i - 1] + dp[i];
    }
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		int N, M;
        cin >> N;
        cin >> M;
        Answer = dpT[M] - dpT[N - 1];
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		// Print the answer to standard output(screen).
        printf("Case #%d\n", test_case+1);
		printf("%d\n", Answer);
	}

	return 0;//Your program should return 0 on normal termination.
}