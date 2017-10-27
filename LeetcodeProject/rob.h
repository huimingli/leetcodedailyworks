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
int rob(vector<int>& nums) {
	int a = 0;
	int b = 0;

	for (int i = 0; i<nums.size(); i++)
	{
		if (i % 2 == 0)
		{
			a = max(a + nums[i], b);
		}
		else
		{
			b = max(a, b + nums[i]);
		}
	}

	return max(a, b);
}