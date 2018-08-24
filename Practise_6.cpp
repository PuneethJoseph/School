//Is One Array a Rotation of Another Array 
//Used normal Arrays
//Time Complexity Big O(n)
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
int isARotation(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{
	
	vector <int> resultArray;
	int i = 0, index = -1;
	int sizeOfFirstArray = firstArraySize;
	int sizeOfSecondArray = secondArraySize;
	if (sizeOfFirstArray != sizeOfSecondArray)
		return -1;
	else
	{
		int firstElement = firstArray[0];
		for (; i < sizeOfFirstArray - 1; i++)
		{
			if (firstElement == secondArray[i])
			{
				index = i;
				break;
			}
		}
		if (index == -1)
			return -1;
		for (int k = 0; k < sizeOfFirstArray; k++)
		{
			i = (index + k) % sizeOfFirstArray;
			if (firstArray[k] != secondArray[i])
				return -1;
		}
		return 1;
	}
}

int main()
{
	int firstArray[] = { 1, 3, 4, 6, 7, 9 };
	int secondArray[] = { 6, 7, 9, 1, 3, 4 };
	int sizeOfFirstArray = sizeof(firstArray) / sizeof(firstArray[0]);
	int sizeOfSecondArray = sizeof(secondArray) / sizeof(secondArray[0]);
	int result = isARotation(firstArray, sizeOfFirstArray, secondArray, sizeOfSecondArray);
	cout << "Result is " << result << endl;
	return 0;
} */

