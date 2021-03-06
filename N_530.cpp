class Solution {
public:
    int getMinimumDifference(TreeNode* root) 
    {
    	int res = INT_MAX, pre = -1;
    	inorder(root, pre, res);
    	return res;
    }

    void inorder(TreeNode *root, int &pre, int &res)
    {
    	if(!root) return;
    	inorder(root->left, pre, res);
    	if(pre != -1) res = min(res, root->val - pre);
    	pre = root->val;
    	inorder(root->right, pre, res);
    }
};