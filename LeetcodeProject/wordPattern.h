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
bool wordPattern(string pattern, string str) {
	vector<string> strs;

	int tmp = 0;
	for (int i = 0; i<str.length(); i++) {
		if (str[i] == ' ') {
			strs.push_back(str.substr(tmp, i - tmp));
			tmp = i + 1;
		}
		if (i == str.length() - 1) {
			strs.push_back(str.substr(tmp, i - tmp + 1));
			tmp = i + 1;
		}
	}

	if (pattern.length() != strs.size()) return false;
	vector<pair<char, string>> ps;
	for (int i = 0; i<pattern.length(); i++) {
		pair<char, string> p;
		p.first = pattern[i];
		p.second = strs[i];
		ps.push_back(p);
	}

	for (int i = 0; i<ps.size(); i++) {
		for (int j = i; j<ps.size(); j++) {
			if (ps[i].first == ps[j].first&&ps[i].second != ps[j].second) {
				return false;
			}
			if (ps[i].second == ps[j].second&&ps[i].first != ps[j].first) {
				return false;
			}
		}
	}
	return true;
}