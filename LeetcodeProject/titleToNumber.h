#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
int titleToNumber(string s) {
	int sum = 0;
	for (int i = 0; i<s.size() - 1; i++) {
		sum += ((((int)s[i]) - 64)*pow(26, (s.size() - 1 - i)));
	}
	sum += (((int)s[s.size() - 1]) - 64);
	return sum;
}