#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
int missingNumber(vector<int>& nums) {
	int sum = nums.size() * (nums.size() + 1) / 2;
	for (int num : nums) {
		sum -= num;
	}
	return sum;
}