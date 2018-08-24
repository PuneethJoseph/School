////Merge Sort
////
////Time Complexity ???
#include "stdafx.h"
#include <iostream>
#include <vector>
//
using namespace std;
//void merge(int sortArray[], int left, int middle, int right){
//	int i, j, k;
//	int n1 = middle - left + 1;
//	int n2 = right - middle;
//	int tempArrayLeft[n1], tempArrayRight[n2];
//	for (i = 0; i < n1; i++)
//		tempArrayLeft[i] = sortArray[left + i];
//
//	for (j = 0; j < n2; j++)
//		tempArrayRight[j] = sortArray[middle + 1 + j];
//	i = 0, j = 0, k = left;
//	while (i < n1 && j < n2){
//		if (tempArrayLeft[i] <= tempArrayRight[i]){
//			sortArray[k] = tempArrayLeft[j];
//			i++;
//		}
//		else
//		{
//			sortArray[k] = tempArrayRight[j];
//			j++;
//		}
//		k++;
//	}
//
//	/* Copy the remaining elements of L[], if there
//	are any */
//	while (i < n1)
//	{
//		sortArray[k] = tempArrayLeft[i];
//		i++;
//		k++;
//	}
//
//	/* Copy the remaining elements of R[], if there
//	are any */
//	while (j < n2)
//	{
//		sortArray[k] = tempArrayRight[j];
//		j++;
//		k++;
//	}
//}
//
//
//
//void mergeSort(int sortArray[], int left, int right){
//
//	if (left < right){
//		int middle;
//		middle = (left + right) / 2;
//		mergeSort(sortArray, left, middle);
//		mergeSort(sortArray, middle + 1, right);
//		merge(sortArray, left, middle, right);
//
//	}
//}
//
//void printArray(int A[], int size)
//{
//
//	for (int i = 0; i < size; i++)
//		cout << A[i] << " ";
//	cout << endl;
//}
//
//
//int main(){
//	int array[] = { 8, 9, 4, 52, 14, 36, 17 };
//	int sizeOfArray = ((sizeof(array)) / (sizeof(array[0])));
//	printArray(array, sizeOfArray);
//	mergeSort(array, 0, sizeOfArray - 1);
//	printArray(array, sizeOfArray);
//	return 0;
//}