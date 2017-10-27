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
int removeDuplicates(vector<int>& nums) {
	int i = nums.size() > 0 ? 1 : 0;
	for (int n : nums)
		if (n > nums[i - 1])
			nums[i++] = n;
	return i;
}