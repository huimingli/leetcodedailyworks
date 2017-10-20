#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
string convertToBase7(int num) {
	int tmp = num;
	if (num == 0) return "0";
	string sub = "";
	while (num != 0) {
		sub = to_string(abs(num % 7)) + sub;
		num /= 7;
	}
	return tmp < 0 ? "-" + sub : sub;
}