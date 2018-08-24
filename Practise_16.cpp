// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<string>
using namespace std;
/*
int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	int result = 2;
	if (N == 1)
	{
		return 1;
	}
	A.push_back(0);
	A.push_back(0);

	bool inseq = false;
	int longperiod = 0;

	for (int i = 1; i < N; i++)
	{


		if (
			((A[i] > A[i + 1]) &&
			(A[i + 1] < A[i + 2])) ||
			((A[i] < A[i + 1]) &&
			(A[i + 1] >A[i + 2]))
			)
		{
			cout << A[i + 2] << ";" << i << endl;
			longperiod++;
			inseq = true;
		}
		else
		{
			if (inseq == true)
			{
				if ((A[i] > A[i + 1]) || (A[i] < A[i + 1]))
				{
					cout << A[i] << ";" << i << endl;
					longperiod++;
				}
				else
				{
					if (longperiod > result)
					{
						result = longperiod;
						longperiod = 0;
						inseq = false;
					}
				}

			}


		}
	}

	if (longperiod > result)
	{
		result = longperiod;
		longperiod = 0;
	}
	cout << " Result is " << result << endl;

	return result;
}
int main() {

	//vector<int> C = { 9,4,2,10,7,8, 8, 1, 9 };
	vector<int> C = { 4, 8, 12, 16, 20, 24 };
	int result = solution(C);
	return result;
}*/