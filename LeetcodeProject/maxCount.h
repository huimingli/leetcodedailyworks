#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
int maxCount(int m, int n, vector<vector<int>>& ops) {
	for (auto op : ops) {
		//          if (op[0] == 0 || op[1] == 0)  continue;
		m = min(op[0], m);
		n = min(op[1], n);
	}
	return m * n;