#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
	vector<int> v;
	for (int i : nums) {
		int id = abs(i) - 1;
		if (nums[id] >0) nums[id] = -nums[id];
		else v.push_back(id + 1);
	}
	return v;
}