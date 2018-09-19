class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        int res = 0;
        vector<TreeNode *> out;
        helper(root, sum, 0, out, res);
        return res;
    }

    void helper(TreeNode *node, int sum, int curSum, vector<TreeNode*> &out, int &res)
    {
    	if(!node) return;
    	curSum += node->val;
    	out.push_back(node);
    	if(curSum == sum) ++res;
    	int t = curSum;
    	for (int i = 0; i < out.size() - 1; ++i)
    	{
    		t -= out[i]->val;
    		if(t == sum) ++res;
    	}
    	helper(node->left, sum, curSum, out, res);
    	helper(node->right, sum, curSum, out, res);
    	out.pop_back();
    }
};