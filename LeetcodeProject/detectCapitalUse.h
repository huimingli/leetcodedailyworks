#pragma once
#include<iostream>
#include<vector>
#include<string>
#include"maxDepth.h"
using namespace std;
//bool detectCapitalUse(string word) {
//	string capitals = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	string ncapitals = "abcdefghijklmnopqrstuvwxyz";
//	if ((word.find_first_of(capitals) == string::npos ? false : true) &&
//		!(word.find_first_of(ncapitals) == string::npos ? false : true)) {
//		return true;
//	}
//	else if ((word.find_first_of(ncapitals) == string::npos ? false : true) &&
//		!(word.find_first_of(capitals) == string::npos ? false : true)) {
//		return true;
//	}
//	else {
//		string first = word.substr(0, 1);
//		string other = word.substr(1, word.length() - 1);
//		if (first.find_first_of(capitals) == string::npos ? false : true && (other.find_first_of(ncapitals) == string::npos ? false : true) &&
//			!(other.find_first_of(capitals) == string::npos ? false : true)) {
//			return true;
//		}
//		return false;
//	}
//
//}

bool detectCapitalUse(string word) {
	int cnt = 0;
 
	for (char c : word ) 
		if (isupper(c)) 
			cnt++;
	return ((cnt == 0 || cnt == word.length()) 
		|| (cnt == 1 && isupper( word[0])));
	//全小写或者全大写或者首字母大写，其余小写
}