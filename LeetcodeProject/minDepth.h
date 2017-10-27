#pragma once
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
int minDepth(TreeNode* root) {
	if (!root) return 0;
	if (!root->left) return minDepth(root->right) + 1;
	if (!root->right) return minDepth(root->left) + 1;
	return 1 + min(minDepth(root->left), minDepth(root->right));
}