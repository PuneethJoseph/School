#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>
#include<memory>
using namespace std;

//int main()
//{
//	int row, col;
//	cout << "Enter row and columns" << endl;
//	cin >> row >> col;
//	int val, count = 0, prev = 0;
//	//int **array = new int [row][col];
//	//auto array = std::make_unique<int[]>(row);
//	// dynamic allocation
//	int** array = new int*[row];
//	for (int i = 0; i < row; ++i)
//		array[i] = new int[col];
//
//	// fill
//	cout << "Enter values" << endl;
//	for (int i = 0; i < row; ++i)
//		for (int j = 0; j < col; ++j){
//			cin >> val;
//			array[i][j] = val;
//		}
//
//
//	// print
//	cout << "The array elements are" << endl;
//	for (int i = 0; i < row; ++i){
//		for (int j = 0; j < col; ++j){
//			std::cout << array[i][j] << " ";
//		}
//		cout << endl;
//	}
//	val = 0;
//	
//	for (int i = 0; i < row; i++){
//		for (int j = 0; j < col; j++){
//			if (array[i][j] == 0){
//				count++;
//			}
//		}
//		if (count >= (col / 2)){
//			//val = 0;
//		}
//		else
//			val++;
//		count = 0;
//		/*else{
//			if (j == 0){
//			if (prev < count){
//			prev = count;
//			}
//			count = 0;
//			}
//			else
//			count++;
//			}*/
//	}
//	cout << "Max  Count is " << val << endl;
//
//	// free
//	for (int i = 0; i < row; ++i)
//		delete[] array[i];
//	delete[] array;
//	return 0;
//
//
//}