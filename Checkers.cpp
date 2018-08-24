//
//  Checkers.cpp
//  Playground
//
//  Created by Puneeth Joseph on 20/08/18.
//  Copyright © 2018 Puneeth Joseph. All rights reserved.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<string>
using namespace std;
/*
void choosePath(vector<string> Board, int left, int right){

}
int main(){

	vector<string> B;
	B.push_back("..X...");
	B.push_back("......");
	B.push_back("....X.");
	B.push_back(".X....");
	B.push_back("..X.X.");
	B.push_back("...O..");
	vector<string>::iterator itr;
	int i, j;
	
	multimap<int, int>AladinIndex;
	multimap<int, int>PossibleIndex;
	map<int, int>LeftIndexToVisit;
	map<int, int>RightIndexToVisit;
	multimap<int, int>::iterator it1;
	pair<int, int> store;
	//pair <map<int, int>::iterator, int> ptr;
	cout << "The Checker board looks like " << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j != 6; j++) {
			cout << B[i][j] << " ";
			if (B[i][j] == 'O'){
				store.first = i;
				store.second = j;

			}
			if (B[i][j] == 'X'){
				AladinIndex.insert(pair <int, int>(i, j));

			}
			if (B[i][j] == '.'){
				PossibleIndex.insert(pair <int, int>(i, j));

			}
		}
		cout << endl;
	}
	cout << endl;
	cout << "Jaffer's pawn is placed at " << endl;
	cout << store.first << "->" << store.second << endl;
	cout << "Aladin's pawn are placed at " << endl;
	for (it1 = AladinIndex.begin(); it1 != AladinIndex.end(); ++it1)
		cout << it1->first << "->" << it1->second << endl;
	cout << "The places that empty and can be visited are" << endl;
	for (it1 = PossibleIndex.begin(); it1 != PossibleIndex.end(); ++it1)
		cout << it1->first << "->" << it1->second << endl;
	cout << "The places that can be visited are" << endl;
	//for(int i = store.first;i > 0; i--){
	//   for(int j = store.second;j > 0;j--){
	i = store.first;
	j = store.second;
	while (j > 0 && i > 0){
		//cout << i - 1 <<  "->" << j - 1 << endl;
		LeftIndexToVisit.insert(pair <int, int>(i-1, j-1));
		i--; j--;
	}
	i = store.first;
	j = store.second;
	cout << "Other side" << endl;
	while (j != 6 && i > 0){
		//cout << i - 1 << "->" << j + 1 << endl;
		RightIndexToVisit.insert(pair <int, int>(i -1, j+1));
		i--; j++;
	}
	cout << endl;
	cout << "Right side" << endl;
	for (it1 = RightIndexToVisit.begin(); it1 != RightIndexToVisit.end(); ++it1)
		cout << it1->first << "->" << it1->second << endl;
	cout << endl;
	cout << "Left side" << endl;
	for (it1 = LeftIndexToVisit.begin(); it1 != LeftIndexToVisit.end(); ++it1)
		cout << it1->first << "->" << it1->second << endl;
	return 0;
}


*/

