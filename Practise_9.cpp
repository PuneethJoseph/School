//Minesweeper
//Used normal Arrays
//Time Complexity Big O(n)
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
/*
#define ROWS 3
#define COLUMNS 5

void minesweeper(int *mArray)
{
	cout << "Welcome " <<endl;
	int mineArray[ROWS][COLUMNS];
	int indexRow = 1, indexCol = 2;
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLUMNS; j++){
			mineArray[i][j] = *(mArray+ i*ROWS + j);
			
			cout << mineArray[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Mines loaded " << endl;
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLUMNS; j++){
			if ((j == indexCol) && (i == indexRow)){
				mineArray[i][j] = -1;
			}
			cout << mineArray[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = (indexRow - 1); (i <= (indexRow + 1) && i < ROWS); i++){
		for (int j = (indexCol - 1);( j <= (indexCol + 1) && j < COLUMNS); j++){
			if ((j == indexCol) && (i == indexRow)){
				//Do Nothing
			}
			else
			{
				mineArray[i][j] = mineArray[i][j] + 1;
			}
		}
	}
	cout << "Game begins " << endl;
	for (int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLUMNS; j++){
			if ((j == indexCol) && (i == indexRow)){
				mineArray[i][j] = -1;
			}
			cout << mineArray[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	
	int array[ROWS][COLUMNS];
	int indexRow = 1, indexCol = 2;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{	
			array[i][j] = 0;
		}
	}
	minesweeper(array[0]);
	return 0;
}*/