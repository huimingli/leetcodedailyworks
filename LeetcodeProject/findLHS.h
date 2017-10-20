#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
int findLHS(vector<int>& nums) {
	unordered_map<int, int> map;
	for (int n : nums) {
		map[n]++;
	}

	int res = 0;
	for (auto a : map) {
		if (map.count(a.first - 1)) {
			res = max(res, a.second + map[a.first - 1]);
		}
	}
	return res;
}