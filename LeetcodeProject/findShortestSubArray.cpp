#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
int findShortestSubArray(vector<int>& nums) {
	unordered_map<int, vector<int>>map;
	int degree = 0;
	int result = INT_MAX;
	for (int i = 0; i<nums.size(); i++) {
		map[nums[i]].push_back(i);
		if (map[nums[i]].size() > degree) degree = map[nums[i]].size();
	}
	for (auto m : map) {
		vector<int>b = m.second;
		if (b.size() == degree) {
			if (result > b[b.size() - 1] - b[0]) result = b[b.size() - 1] - b[0];
		}
	}

	return result + 1;
}