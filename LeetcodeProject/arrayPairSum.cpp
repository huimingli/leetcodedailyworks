#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arrayPairSum(vector<int>& nums) {
	sort(nums.begin() , nums.end());
	int sum = 0;
	for (int i = nums.size() - 2; i >= 0; i -= 2) {
		sum += nums[i];
	}
	return sum;
}
//int main() {
//	vector<int> params = {1,4,3,2};
//	cout << arrayPairSum(params) << endl;
//}