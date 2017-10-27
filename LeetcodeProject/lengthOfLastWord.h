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
int lengthOfLastWord(string s) {
	int count = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		while (s[i] != ' ' && i >= 0) {
			i--;
			count++;
			if (s[i] == ' ') {
				return count;
			}
		}
	}
	return count;
}