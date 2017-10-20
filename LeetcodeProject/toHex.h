#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
const string HEX = "0123456789abcdef";
string toHex(int num) {
	if (num == 0) return "0";
	string result;
	int count = 0;
	while (num && count++ < 8) {
		result = HEX[(num & 0xf)] + result;
		num >>= 4;
	}
	return result;
}