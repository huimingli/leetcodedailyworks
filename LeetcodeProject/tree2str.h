#pragma once
#include<vector>
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;
 struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
string tree2str(TreeNode* t) {
	if (!t) return "";
	string s = to_string(t->val);

	if (t->left) {
		s += "(" + tree2str(t->left) + ")";
	}
	else if (t->right) {
		s += "()";
	}

	if (t->right) {
		s += "(" + tree2str(t->right) + ")";
	}

	return s;
}
