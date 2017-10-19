#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int maxProfit(vector<int>& prices) {
	if (prices.size() == 0) return 0;
	int total = 0;
	for (int i = 0; i< prices.size() - 1; i++) {
		if (prices[i + 1]>prices[i]) total += prices[i + 1] - prices[i];
	}

	return total;
}