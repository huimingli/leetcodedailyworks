#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	unordered_map<int, int>map;
	for (int num : nums1) {
		map[num] ++;
	}
	vector<int> result;
	for (int num : nums2) {
		if (map[num] > 0) {
			map[num] --;
			result.push_back(num);
		}
	}
	return result;
}