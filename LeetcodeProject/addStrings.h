#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
string addStrings(string num1, string num2) {
	int a = num1.size();
	int b = num2.size();
	string big = a>b ? num1 : num2;
	string small = a>b ? num2 : num1;
	string re = "";
	int tmp = 0;
	int j = small.size() - 1;
	for (int i = big.length() - 1; i >= 0; i--) {
		int sum = 0;
		if (j >= 0) {
			sum += small[j--] - '0';
		}
		sum += big[i] - '0';
		if (tmp == 1) {
			sum++;
			tmp = 0;
		}
		if (sum >= 10) {
			tmp++;
			if (i != 0) {
				sum %= 10;
			}
		}

		re = to_string(sum) + re;

	}
	return re;
}