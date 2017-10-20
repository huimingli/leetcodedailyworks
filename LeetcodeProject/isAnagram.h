#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;

bool isAnagram(string s, string t) {
	if (s.length() != t.length()) return false;
	unordered_map<char, int> map(26);
	for (int i = 0; i<t.length(); i++) {
		map[s[i]] ++;
		map[t[i]]--;
	}
	for (auto a : map) {
		if (a.second) return false;
	}
	return true;
}