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
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	if (p->val<root->val&&q->val<root->val) {
		return lowestCommonAncestor(root->left, p, q);
	}
	if (p->val>root->val&&q->val>root->val) {
		return lowestCommonAncestor(root->right, p, q);
	}

	return root;
}