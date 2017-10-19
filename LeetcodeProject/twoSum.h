#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
	int start = 0, end = numbers.size() - 1;
	while (start<end) {
		if (numbers[start] + numbers[end] == target) {
			vector<int> result = { start + 1,end + 1 };
			return result;
		}
		else if (numbers[start] + numbers[end] > target) {
			end--;
		}
		else if (numbers[start] + numbers[end] < target) {
			start++;
		}
	}
}