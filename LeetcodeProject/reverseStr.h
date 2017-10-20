#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;

string reverseStr(string s, int k) {
	string result = "";
	for (int i = 0; i<s.length(); i += k) {
		string sub = s.substr(i, k);
		if (i / k % 2 == 0) {
			reverse(sub.begin(), sub.end());
		}
		result += sub;
	}
	return result;
}