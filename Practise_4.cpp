//Most Frequently Occuring Item in an Array 
//Used unordered Array
//Time Complexity Big O(n)

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
/*
int main()
{
	int array[] = { -3, 2, -2, 3, -2, 1 };
	int sizeOfArray = sizeof(array) / sizeof(array[0]);
	unordered_map <int, int> count ;
	for (int i = 0; i < sizeOfArray; i++)
		count[array[i]]++;
	int i = 0, maxCount = 0, maxItem = -1;
	for (auto itr : count){
		if (maxCount < itr.second){
			maxItem = itr.first;
			maxCount = itr.second;
		}
		
	}
	cout << "The Most Frequently Occuring Item in an Array is " << maxItem << endl;
}*/
