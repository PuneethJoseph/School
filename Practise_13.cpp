////Longest Increasing Subsequence
//////
//////Time Complexity 0(n^2)
#include "stdafx.h"
#include <iostream>
#include <vector>
//
using namespace std;
//// Utility function to print LIS
//
//void printLIS(vector<int>& arr)
//{
//	for (int x : arr)
//		cout << x << " ";
//	cout << endl;
//}
//void constructLisAndPrint(int array[], int arraySize){
//	vector<vector <int> > Lis(arraySize);
//	Lis[0].push_back(array[0]);
//	for (int i = 1; i < arraySize; i++){
//		for (int j = 0; j < i; j++){
//			if (array[i] > array[j] && (Lis[i].size() < Lis[j].size() + 1)){
//				cout << "Lis[i].size() " << Lis[i].size() << endl;
//				Lis[i] = Lis[j];
//			}
//		}
//		Lis[i].push_back(array[i]);
//	}
//	vector<int> max = Lis[0];
//
//	// LIS will be max of all increasing sub-
//	// sequences of arr
//	for (vector<int> x : Lis)
//		if (x.size() > max.size())
//			max = x;
//
//	// max will contain LIS
//	printLIS(max);
//}
//
//int main(){
//	int Array[] = { 3, 10, 2, 1, 20 };
//	int sizeOfArray = sizeof(Array) / sizeof(Array[0]);
//	constructLisAndPrint(Array, sizeOfArray);
//	return 0;
//}