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
int sumOfLeftLeaves(TreeNode* root) {
	int sum = 0;
	if (root == NULL) return 0;
	queue<TreeNode*>q;
	q.push(root);
	while (!q.empty()) {
		TreeNode* node = q.front();
		q.pop();
		TreeNode *leftn = node->left;
		if (leftn) {
			q.push(leftn);
			if (leftn->left == NULL&&leftn->right == NULL)
				sum += (node->left->val);
		}
		if (node->right) q.push(node->right);
	}
	return sum;
} 