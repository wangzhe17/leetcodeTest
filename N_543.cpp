class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int res = 0;
        maxDepth(root, res);
        return res;
    }
    int maxDepth(TreeNode *node, int &res)
    {
    	if(!node) return 0;
    	if(m.count(node)) return m[node];
    	int left = maxDepth(node->left, res);
    	int right = maxDepth(node->right, res);
    	res = max(res, left + right);
    	return m[node] = (max(left, right) + 1);
    }

private:
	unordered_map<TreeNode*, int> m;
};