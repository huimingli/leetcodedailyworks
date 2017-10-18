#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	set<int> se;
	bool findTarget(TreeNode* root, int k) {

		return search(root, k);

	}
	bool search(TreeNode*root, int k) {
		if (!root) {
			return false;
		}
		if (se.count(k - root->val)) {
			return true;
		}
		se.insert(root->val);
		return search(root->left, k) || search(root->right, k);
	}
};