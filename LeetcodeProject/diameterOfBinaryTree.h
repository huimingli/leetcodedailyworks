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
int depth(TreeNode *root) {
	if (root == nullptr) {
		return 0;
	}
	return 1 + max(depth(root->left), depth(root->right));
}

int diameterOfBinaryTree(TreeNode* root) {
	if (root == nullptr) return 0;
	int res = depth(root->left) + depth(root->right);
	return max(res, max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
}