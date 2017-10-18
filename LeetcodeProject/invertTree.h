#pragma once
#include<vector>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* invertTree(TreeNode* root) {
	if (!root) return NULL;
	swap(root->left, root->right);
	invertTree(root->left);
	invertTree(root->right);
	return root;
}
