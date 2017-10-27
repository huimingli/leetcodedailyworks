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
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int i = m - 1, j = n - 1, tar = m + n - 1;
	while (j >= 0) {
		if (i >= 0 && nums1[i] > nums2[j]) {
			nums1[tar--] = nums1[i--];
		}
		else {
			nums1[tar--] = nums2[j--];
		}
	}
}