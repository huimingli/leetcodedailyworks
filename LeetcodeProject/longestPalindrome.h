#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
int longestPalindrome(string s) {
	unordered_map<char, int>map;
	for (char c : s) {
		map[c] ++;
	}

	int count = 0;

	for (auto a : map) {
		if (a.second >1)
			count += (a.second % 2 == 0 ? a.second : a.second - 1);
	}

	return count < s.length() ? count + 1 : count;

}