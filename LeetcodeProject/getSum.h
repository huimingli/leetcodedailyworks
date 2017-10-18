#pragma once
#include<iostream>
#include<vector>
#include<string>
#include"maxDepth.h"
using namespace std;
int getSum(int a, int b) {
	return b == 0 ? a : getSum(a^b, (a&b) << 1);
}