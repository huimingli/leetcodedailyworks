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
vector<string> result;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
};
void dfs(TreeNode*root, string t) {
	if (!root->left && !root->right) {
		result.push_back(t);
		return;
	}
	if (root->left)
		dfs(root->left, t + "->" + to_string(root->left->val));
	if (root->right)
		dfs(root->right, t + "->" + to_string(root->right->val));
}
vector<string> binaryTreePaths(TreeNode* root) {
	if (!root) return result;
	dfs(root, to_string(root->val));
	return result;
}