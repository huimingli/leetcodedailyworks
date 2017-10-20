#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
bool isHappy(int n) {

	string num = to_string(n);
	int sum = 0;
	for (char a : num) {
		sum += pow((a - '0'), 2);

	}
	if (sum<6 && sum != 1) {
		return false;
	}
	if (sum == 1) return true;
	return isHappy(sum);
}