#pragma once
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
class Solution {
public:
	int   count = 0;
	int dfs(TreeNode* root) {
	if (!root) return 0;
	int l = dfs(root->left);
	int r = dfs(root->right);
	count += abs(l - r);

	return l + r + root->val;
}
int findTilt(TreeNode* root) {
	dfs(root);
	return count;

}
};
