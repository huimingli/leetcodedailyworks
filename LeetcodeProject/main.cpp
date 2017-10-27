#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<math.h>
using namespace std;
class NumArray {
public:
	vector<int> v;
	NumArray(vector<int> nums) {
		v = vector<int>(nums.begin(), nums.end());
	}

	int sumRange(int i, int j) {
		int sum = 0;
		for (int k = i; k <= j; k++) {
			sum += v[i];
		}
		return sum;
	}
};
int main() {  

	NumArray na = NumArray({  -2,0,3,-5,2,-1  });
	cout << na.sumRange(0, 2);
}


