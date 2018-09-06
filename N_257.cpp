class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root) helper(root, "", res);
        return res;
    }
    void helper(TreeNode *node,string out, vector<string> &res)
    {
    	if(!node->left && !node->right) res.push_back(out + to_string(node->val));
    	if(node->left) helper(node->left, out + to_string(node->val) + "->", res);
    	if(node->right) helper(node->right, out + to_string(node->val) + "->", res);
    }
};