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
bool judgeSquareSum(int c) {
	int tmp = sqrt(c);
	int btmp = 0;
	while (tmp >= btmp) {
		if (tmp *tmp + btmp *btmp > c) {
			tmp--;
		}
		else if (tmp *tmp + btmp *btmp < c) {
			btmp++;
		}
		else {
			return true;
		}
	}
	return false;


}