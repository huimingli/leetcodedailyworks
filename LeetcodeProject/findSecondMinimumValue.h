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
int findSecondMinimumValue(TreeNode* root) {
	if (!root) return -1;
	int ans = minval(root, root->val);
	return ans;
}
 
	int minval(TreeNode* p, int first) {
		if (p == nullptr) return -1;
		if (p->val != first) return p->val;
		int left = minval(p->left, first), right = minval(p->right, first);
		// if all nodes of a subtree = root->val, 
		// there is no second minimum value, return -1
		if (left == -1) return right;
		if (right == -1) return left;
		return min(left, right);
	}