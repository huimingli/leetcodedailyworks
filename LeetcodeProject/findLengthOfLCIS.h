#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
int findLengthOfLCIS(vector<int>& nums) {
	int count = 1;
	int maxc = 1;
	if (nums.size() == 0)return 0;
	for (int i = 0; i<nums.size(); i++) {
		if (i>0 && nums[i] > nums[i - 1]) {
			count++;
		}
		else {
			if (count > maxc) {
				maxc = count;
			}
			count = 1;
		}
	}
	return max(count, maxc);
}