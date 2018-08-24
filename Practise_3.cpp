/* Given an array A[] and a number x, check for pair in A[] with sum as x
Link https://www.geeksforgeeks.org/write-a-c-program-that-given-a-set-a-of-n-numbers-and-another-number-x-determines-whether-or-not-there-exist-two-elements-in-s-whose-sum-is-exactly-x/
Write a C program that, given an array A[] of n numbers and another number x, determines whether or not there exist two elements in S whose sum is exactly x */
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
void vectorImplementation()
{
	vector<int> array;
	int numberOfElements, element, maxElement, searchElement,index;
	vector<int>::iterator itr;
	cout << "Enter the number of elements " << endl;
	cin >> numberOfElements;
	cout << "Enter " << numberOfElements << " elements in the vector" << endl;
	for (index = 0; index < numberOfElements; index++)
	{
		cin >> element;
		array.push_back(element);
	}
	cout << "Entered vector elements" << endl;
	maxElement = array.at(0);
	for (itr = array.begin(); itr != array.end(); ++itr)
	{
		cout << *itr << endl;
	}
	cout << "Entered the element to check for the sum of two elements in the vector" << endl;
	cin >> searchElement;
	sort(array.begin(), array.end());
	int sizeOfVector = array.size() - 1;
	
	for (index = 0; index < sizeOfVector; index++)
	{
		if ((index < sizeOfVector))
		{
			if (searchElement == (array.at(index) + (array.at(sizeOfVector - index))))
			{
				cout << "There two elements in the Vector whose sum is equal to " << searchElement << " are " << (array.at(index)) <<" and " << (array.at(sizeOfVector - index)) << endl;
				return;
			}
		}
	}
	cout << "There are no two elements in the Vector whose sum is equal to " << searchElement << endl;

	//return 0;
}
int main()
{
	vectorImplementation();
	getchar();
	return 0;
}
*/