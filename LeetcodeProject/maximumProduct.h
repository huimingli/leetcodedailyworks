#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
int maximumProduct(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int index = nums.size() - 1;
	if (nums[0] * nums[1] > nums[index - 2] * nums[index - 1]) {
		return nums[index] * nums[0] * nums[1];
	}
	return nums[index] * nums[index - 1] * nums[index - 2];
}