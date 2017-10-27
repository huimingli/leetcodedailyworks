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
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
};
int depth(TreeNode * root) {
	if (!root) return 0;
	return 1 + max(depth(root->left), depth(root->right));
}
bool isBalanced(TreeNode* root) {
	if (!root) return true;
	if (isBalanced(root->right) && isBalanced(root->left) && abs(depth(root->left) - depth(root->right)) <= 1) {
		return true;
	}
	return false;
}