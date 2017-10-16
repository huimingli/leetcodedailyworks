#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
int distributeCandies(vector<int>& candies) {
	int sum = 0;
	unordered_set<int> kinds;
	for (int i:candies) {
		kinds.insert(i);
	}
	return min(candies.size()/2,kinds.size());
}
 