#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<int> constructRectangle(int area) {
	int i = 1, j = 1, minBet = INT_MAX;
	vector<int> result(2, 0);
	for (i = 1; i <= area; i++) {
		int j = area / i;
		if (i*j == area) {
			if (minBet>abs(i - j)) {
				minBet = abs(i - j);
				result[0] = (i >= j ? i : j);
				result[1] = (i <= j ? i : j);
			}
		}
	}
	return result;
}

//vector<int> constructRectangle(int area) {
//	for (int i = sqrt(area); i>0; i--) {
//		if (area % i == 0) {
//			return{ area / i,i };
//		}
//	}
//}