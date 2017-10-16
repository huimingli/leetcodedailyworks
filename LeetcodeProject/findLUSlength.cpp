#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int findLUSlength(string a, string b) {

	return a == b ? -1 : max(a.length(), b.length());
}
 