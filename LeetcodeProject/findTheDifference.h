#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;
char findTheDifference(string s, string t) {
	char r = 0;
	for (char sub : s) r ^= sub;
	for (char sub : t) r ^= sub;
	return r;
}