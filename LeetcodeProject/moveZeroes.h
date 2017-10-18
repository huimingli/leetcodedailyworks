#pragma once
#include<vector>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
void moveZeroes(vector<int>& nums) {
	int cur = 0, last = 0;
	while (cur < nums.size()) {
		if (nums[cur] != 0) {
			swap(nums[cur], nums[last]);
			last++;
		}
		cur++;
	}
}