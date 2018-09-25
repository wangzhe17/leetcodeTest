class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        helper(root, sum);
        return root;
    }

    void helper(TreeNode*& node, int& sum)
    {
    	if(!node) return;
    	helper(node->right, sum);
    	node->val += sum;
    	sum = node->val;
    	helper(node->left, sum);
    }
};