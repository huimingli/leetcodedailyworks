#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
vector<vector<int>> levelOrderBottom(TreeNode* root) {
	vector<vector<int>> result;
	if (!root) {
		return result;
	}
	queue<TreeNode*>q;
	stack<vector<int>> s;
	vector<int> rootv = { root->val };
	s.push(rootv);
	q.push(root);
	q.push(nullptr);
	vector<int>tmp;
	while (!q.empty()) {
		TreeNode* node = q.front();
		q.pop();

		if (node == nullptr) {
			if (tmp.size() > 0) {
				s.push(tmp);
			}
			if (!q.empty()) {
				q.push(nullptr);
				tmp.clear();
			}
		}
		else {
			if (node->left) {
				tmp.push_back(node->left->val);
				q.push(node->left);
			}
			if (node->right) {
				tmp.push_back(node->right->val);
				q.push(node->right);
			}
		}
	}

	while (!s.empty()) {
		result.push_back(s.top());
		s.pop();
	}

	return result;
}