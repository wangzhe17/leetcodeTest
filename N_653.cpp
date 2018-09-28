class Solution {
public:
    bool findTarget(TreeNode* root, int k) 
    {
        if(!root) return false;
        unordered_set<int> s;
        return helper(root, k, s);
    }

    bool helper(TreeNode *root, int k, unordered_set<int> &s)
    {
    	if(!root) return false;
    	if(s.count(k - root->val)) return true;
    	s.insert(root->val);
    	return helper(root->left, k, s) || helper(root->right, k, s);
    }
};