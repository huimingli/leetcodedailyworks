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
};
int sum = 0;
TreeNode* convertBST(TreeNode* root) {
	if (!root) return NULL;
	convertBST(root->right);
	root->val = (sum += root->val);
	convertBST(root->left);
	return root;
}
