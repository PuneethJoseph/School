//Non repeating Character
//Used normal Arrays
//Time Complexity Big O(n)
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
/*
int main()
{
	string array = "abcecbab";
	int sizeOfString = array.size();
	if ((sizeOfString == 0) || (sizeOfString == 1))
	{
		cout << "No repeacting characters " << endl;
		return 0;
	}
	else 
	{
		unordered_map <char, int> count;
		for (int i = 0; i < sizeOfString; i++)
			count[array[i]]++;
		int i = 0, maxCount = 1;
		char nonRepeatedChar = ' ';
		for (auto itr : count){
			if (maxCount ==  itr.second){
				nonRepeatedChar = itr.first;
				cout << "Non Repeacting characters  is " << nonRepeatedChar << endl;
				return 0;
			}
		}
		cout << "No Non Repeacting characters  are present " << endl;
		return 0;
	}
	
}*/