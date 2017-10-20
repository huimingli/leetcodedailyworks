#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
	unordered_set<int> result;
	for (int num : nums) {
		int size = result.size();

		result.insert(num);

		if (size == result.size()) return true;
	}
	return false;
}