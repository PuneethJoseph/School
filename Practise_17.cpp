#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<stack>
using namespace std;
/*
#define N 4
bool CELEB[N][N] = { { 0, 0, 1, 0 },
{ 0, 0, 1, 0 },
{ 0, 0, 0, 1 },
{ 0, 0, 0, 0 } };
bool knows(int a, int b){
	return CELEB[a][b];
}
int  findCeleb(int n){
	stack<int> celebStack;
	for (int i = 0; i < n; i++){
		celebStack.push(i);
	}
	int A = celebStack.top();
	celebStack.pop();
	int B = celebStack.top();
	celebStack.pop();
	while (celebStack.size() > 1)
	{
		if (knows(A, B)){
			A = celebStack.top();
			celebStack.pop();
		}

		else{
			B = celebStack.top();
			celebStack.pop();
		}
	}

	int C;
	// Potential candidate?
	C = celebStack.top();
	celebStack.pop();

	// Last candidate was not 
	// examined, it leads one 
	// excess comparison (optimize)
	if (knows(C, B))
		C = B;

	if (knows(C, A))
		C = A;

	// Check if C is actually
	// a celebrity or not
	for (int i = 0; i < n; i++)
	{
		// If any person doesn't 
		// know 'a' or 'a' doesn't 
		// know any person, return -1
		if ((i != C) &&
			(knows(C, i) ||
			!knows(i, C)))
			return -1;
	}

	return C;
		

}
int main()
{
	int numOfCeleb,value;
	cout << "The matrix details are " << endl;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cout << CELEB[i][j] << " ";
		}
		cout << endl;
	}
	int result = findCeleb(4);
	cout << "Result " << result;

	
	}*/