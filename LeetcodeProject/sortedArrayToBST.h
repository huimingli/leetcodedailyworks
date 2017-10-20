#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};
TreeNode* sorted(vector<int>& nums, int start, int end) {
	if (start >= end) return NULL;
	int mid = (start + end) / 2;
	TreeNode * node = new TreeNode(nums[mid]);
	node->left = sorted(nums, start, mid);
	node->right = sorted(nums, mid + 1, end);

	return node;

}
 
	TreeNode* sortedArrayToBST(vector<int>& nums) {

		return sorted(nums, 0, nums.size());
	}