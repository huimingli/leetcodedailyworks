#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;
int minMoves(vector<int>& nums) {
	int sum = 0, minNum = INT_MAX;
	for (int num : nums) {
		if (minNum > num) minNum = num;
		sum += num;
	}

	return sum - minNum * nums.size();

}