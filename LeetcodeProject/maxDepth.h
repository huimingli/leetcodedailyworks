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

int maxDepth(TreeNode* root) {
	if (root) {
		int count = 1;
		queue<TreeNode*> q;
		q.push(root);
		q.push(nullptr);
		while (!q.empty()) {
			TreeNode*t = q.front();
			q.pop();
			if (t == nullptr) {
				if (!q.empty()) {
					q.push(nullptr);
					count++;
				}
			}
			else {
				if (t->left) q.push(t->left);
				if (t->right) q.push(t->right);
			}
		}
		return count;
	}
	return 0;
}
//一行代码搞定
//int maxDepth(TreeNode *root)
//{
//	return root == NULL ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
//}
