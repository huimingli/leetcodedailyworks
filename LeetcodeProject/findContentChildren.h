#pragma once
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
	int i = g.size() - 1, j = s.size() - 1;
	sort(g.begin(), g.end());
	sort(s.begin(), s.end());
	int count = 0;
	while (i >= 0 && j >= 0) {
		if (g[i] > s[j]) i--;
		else {
			i--;
			j--;
			count++;
		}
	}
	return count;
}