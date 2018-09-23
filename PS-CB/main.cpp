/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <stdio.h>
#include <set>
#include <map>

using namespace std;

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
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		set<int> st;
		map<int, int> mm;
		map<int, int> kk;
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		   Implement your algorithm here.
		   The answer to the case will be stored in variable Answer.
		 */
		/////////////////////////////////////////////////////////////////////////////////////////////

		// Print the answer to standard output(screen).
		int N, K, in, mi, ma = 0, m = 0;
		scanf("%d %d", &N, &K);
		for(int i = 0; i < N; i++){
            scanf("%d", &in);
            st.insert(in);
		}
		mi = *(st.begin());
		for(auto v : st){
            mm[(v-mi)/K]++;
            kk[(v-mi-1)/K]++;
		}
		for(auto v : st){
            if(ma < mm[(v-mi)/K]);
                ma = mm[(v-mi)/K];
            if(m < kk[(v-mi-1)/K]);
                m = kk[(v-mi-1)/K];
		}
		Answer = max(ma, m);

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
