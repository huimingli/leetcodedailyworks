#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
bool canConstruct(string ransomNote, string magazine) {
	unordered_map<char, int> map(26);
	for (char r : magazine) {
		map[r] ++;
	}
	for (char r : ransomNote) {
		map[r] --;
		if (map[r] < 0)
			return false;
	}
	return true;
}