class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) 
    {
        int first = root->val, second = INT_MAX;
        helper(root, first, second);
        return (second == first || second == INT_MAX) ? -1 : second;
    }
    void helper(TreeNode* node, int& first, int &second)
    {
    	if(!node) return;
    	if(node->val != first && node->val <second)
    	{
    		second = node->val;
    	}
    	helper(node->left, first, second);
    	helper(node->right, first,second);
    }
};