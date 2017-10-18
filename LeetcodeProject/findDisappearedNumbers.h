#pragma once
#include<iostream>
#include<vector>
#include<string>
 
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) {

	vector<int> v;
	for (int i : nums) {
		int id = abs(i) - 1;
		nums[id] = nums[id] > 0 ? -nums[id] : nums[id];
	}

	for (int i = 0; i<nums.size(); i++) {
		if (nums[i]>0) v.push_back(i + 1);
	}
	return v;
}