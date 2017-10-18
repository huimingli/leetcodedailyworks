#pragma once
#include<iostream>
#include<vector>
#include<string>
#include"maxDepth.h"
using namespace std;
int addDigits(int num) {
	string numStr = to_string(num);
	if (numStr.length() == 1) {
		return atoi(numStr.c_str());
	}
	int sum = 0;
	for (int i = 0; i<numStr.length(); i++) {
		sum += ((int)(numStr[i] - 48));
	}
	return addDigits(sum);

}