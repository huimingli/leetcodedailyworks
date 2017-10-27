#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<math.h>
using namespace std;
bool check(string &s, int b, int e, int d) {
	if (b >= e) return true;
	if (s[e] == s[b]) return check(s, b + 1, e - 1, d);
	else {
		return d>0 && (check(s, b + 1, e, d - 1) || check(s, b, e - 1, d - 1));
	}
}
bool validPalindrome(string s) {
	return check(s, 0, s.length() - 1, 1);
}