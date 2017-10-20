#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
int firstUniqChar(string s) {

	unordered_map<char, int> map;
	for (char sub : s) {
		map[sub]++;
	}
	for (int i = 0; i<s.length(); i++) {
		if (map[s[i]] == 1) return i;
	}
	return -1;
}