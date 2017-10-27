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
int hammingWeight(uint32_t n) {
	int sum = 0;
	while (n != 0) {
		n &= (n - 1);
		sum++;
	}
	return sum;
}