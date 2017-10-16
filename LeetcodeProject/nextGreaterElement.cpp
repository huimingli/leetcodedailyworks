#include<iostream>
#include<vector>
using namespace std;
vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums)
{
	vector<int>result;
	for (int i = 0; i < findNums.size(); i++) {
		for (int j = 0; j < nums.size(); j++) {
			if (findNums[i] == nums[j]) {
				int greatNum = -1;
				while (j <= nums.size() - 1) {
					if (findNums[i] < nums[j]) {
						greatNum = nums[j];
						break;
					}
					else {
						j++;
					}
				}
				result.push_back(greatNum);
			}
		}
		
	}
	return result;
}
//void main () {
//	
//	vector<int> num1 = {2,4};
//	vector<int> num2 = {1,2,3,4};
//	vector<int>result = nextGreaterElement(num1, num2);
//	for (size_t i = 0; i < result.size(); i++)
//	{
//		cout << result[i] << " ";
//	}
//}