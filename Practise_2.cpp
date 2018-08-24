/* Recursive program to linearly search an element in a given array
Link https://www.geeksforgeeks.org/recursive-c-program-linearly-search-element-given-array/
 Recursive program to linearly search an element in a given vector*/

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
/*
int vectorRecursiveSearch(vector<int>searchVector,int index,int size, int searchElement)
{
	if (index > size)
		return -1;
	if (searchVector.at(index) == searchElement)
		return 1;
	return (searchVector, index + 1, size, searchElement);
}
int vectorImplementation()
{
	vector<int> array;
	int numberOfElements, element, maxElement, searchElement;
	vector<int>::iterator itr;
	cout << "Enter the number of elements " << endl;
	cin >> numberOfElements;
	cout << "Enter " << numberOfElements << " elements in the vector" << endl;
	for (int index = 0; index < numberOfElements; index++)
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
	cout << "Entered the element to be searched" << endl;
	cin >> searchElement;
	int index = 0;
	/*for (itr = array.begin(); itr != array.end(); ++itr)
	{
		index++;
		if (searchElement == (*itr))
		{
			cout << "The element is found at position " << index << endl;
			return 1;
		}
	}*/
/*
	int returnValue = vectorRecursiveSearch(array, 0, array.size(), searchElement);
	if (returnValue == 1)
	{
		cout << "The element is found " << endl;
		return 1;
	}
	else
	{
		cout << "The element is not found in the vector " << endl;
		return 0;
	}
	
}
int main()
{
	int returnValue = vectorImplementation();
	getchar();
	return 0;
}*/