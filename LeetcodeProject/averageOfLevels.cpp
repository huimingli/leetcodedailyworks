#include<iostream>
#include<queue>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	vector<double> averageOfLevels(TreeNode* root) {
		queue<TreeNode*> q;
		q.push(root);
		q.push(nullptr);
		double count = 0, sum = 0;
		vector<double> result;
		while (!q.empty()) {
			TreeNode *t = q.front();
			q.pop();
			if (t == nullptr) {
				result.push_back(sum / count);
				sum = count = 0;
				if (!q.empty()) {
					q.push(nullptr);
				}
			}
			else {
				sum += t->val;
				count++;
				TreeNode *leftNode = t->left;
				TreeNode *rightNode = t->right;
				if (leftNode) {
					q.push(leftNode);
				}
				if (rightNode) {
					q.push(rightNode);
				}
			}
		}
		return result;
	}
};
 