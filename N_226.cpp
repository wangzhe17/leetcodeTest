class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
    	if(!root) return NULL;
        if(!root->left && !root->right) return root;
        TreeNode *tmp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(tmp);
        return root;
    }
};