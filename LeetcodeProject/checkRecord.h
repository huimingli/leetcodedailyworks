#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
bool checkRecord(string s) {
	unordered_map<char, int> map(3);
	for (char sub : s) {
		map[sub] ++;
		if (map['L'] == 3 || map['A'] == 2) return false;
		if (sub != 'L' && map['L'] > 0) map['L'] = 0;
	}

	return true;
}