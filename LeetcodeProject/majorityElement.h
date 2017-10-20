#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
int majorityElement(vector<int>& nums) {
	unordered_map<int, int> map(nums.size());
	for (int num : nums) {
		map[num]++;
		if (map[num] > nums.size() / 2) {
			return num;
		}
	}
	return -1;
}