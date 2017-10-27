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
int dfs(TreeNode* node, int& lup) {
	int l = node->left ? dfs(node->left, lup) : 0;
	int r = node->right ? dfs(node->right, lup) : 0;
	int resl = node->left && node->left->val == node->val ? l + 1 : 0;
	int resr = node->right && node->right->val == node->val ? r + 1 : 0;
	lup = max(lup, resl + resr);
	return max(resl, resr);
}
int longestUnivaluePath(TreeNode* root) {
	int lup = 0;
	if (root) dfs(root, lup);
	return lup;
}