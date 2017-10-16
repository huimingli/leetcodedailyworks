#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool hasAlternatingBits(int n) {
	return ((n + (n >> 1) + 1) & (n + (n >> 1))) == 0;
}
 