/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        int res = INT_MAX;
        vector<int> v;
        helper(root, v);
        for (int i = 1; i < v.size(); ++i)
        {
        	res = min(res, v[i] - v[i - 1]);
        }
        return res;
    }

    void helper(TreeNode *node, vector<int> &vec)
    {
    	if(!node) return;
    	helper(node->left, vec);
    	vec.push_back(node->val);
    	helper(node->right, vec);
    }
};