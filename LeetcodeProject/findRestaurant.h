#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
	int minx = INT_MAX;
	vector<string> result;
	for (int j = 0; j<list1.size(); j++) {
		for (int i = 0; i<list2.size(); i++) {
			if (list1[j] == list2[i])
			{
				if (minx> i + j) {
					result.clear();
					minx = i + j;
				}
				else if (minx < i + j) {
					continue;
				}
				result.push_back(list1[j]);
			}
		}
	}


	return result;
}