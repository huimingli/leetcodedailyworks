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
bool containsNearbyDuplicate(vector<int>& nums, int k) {
	if (nums.size() == 0) return false;
	unordered_map<int, int> map;
	for (int i = 1; i<nums.size() + 1; i++) {
		if (map[nums[i - 1]] != 0 && abs(map[nums[i - 1]] - i) <= k) {
			return true;
		}
		else {
			map[nums[i - 1]] = i;
		}
	}
	return false;
}