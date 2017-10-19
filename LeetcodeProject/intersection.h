#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	unordered_set<int> numset(nums1.begin(), nums1.end());
	vector<int> result;
	for (auto a : nums2) {
		if (numset.count(a)) {
			result.push_back(a);
			numset.erase(a);
		}
	}
	return result;
}