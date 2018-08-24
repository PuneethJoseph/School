//Common Item between 2 Array 
//Used normal Arrays and Vector
//Time Complexity Big O(max(n,m)
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
/*
int main()
{
	int firstArray[] = { 1, 3, 4, 6, 7, 9 };
	int secondArray[] = { 1, 2, 4, 5, 9, 10 };
	vector <int> resultArray ;
	int i =0;
	int sizeOfArray = sizeof(firstArray) / sizeof(firstArray[0]);
	for (; i < sizeOfArray; i++)
	{
		//cout << firstArray[i] << endl;
		for (int k = 0; k < sizeof(secondArray) / sizeof(secondArray[0]); k++)
		{
			if (firstArray[i] == secondArray[k])
			{
				resultArray.push_back(firstArray[i]);
			}
		}

		
	}
	cout << "The common elements in the 2 Arrays are ";
	for (i = 0; i < resultArray.size(); i++)
	{
		cout << resultArray[i] << " ";
	}
	return 0;
	}*/