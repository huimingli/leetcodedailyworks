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
};
bool isSameTree(TreeNode* p, TreeNode* q) {
	if (p == NULL || q == NULL) {
		return p == q;
	}

	return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}