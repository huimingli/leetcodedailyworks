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
double findMaxAverage(vector<int>& nums, int k) {
	double maxAv = INT_MIN;
	for (int i = 0; i<nums.size(); i++) {

		if (i + k>nums.size()) {
			break;
		}
		int tmp = 0;
		for (int j = i; j<i + k; j++) {
			tmp += nums[j];
		}
		maxAv = tmp >= maxAv ? tmp : maxAv;
	}
	return maxAv / k;
}