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
bool isUgly(int num) {
	if (num == 1) return true;
	if (num == 0) return 0;
	vector<int> nums = { 2,3,5 };
	for (int n : nums) {
		if (n == num) return true;
		if (num % n == 0) {
			int k = num / n;
			return isUgly(k);
		}
	}
	return false;
}