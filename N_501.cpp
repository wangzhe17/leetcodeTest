class Solution {
public:
    vector<int> findMode(TreeNode* root) 
    {
        vector<int> res;
        int mx = 0;
        unordered_map<int, int> m;
        inorder(root, m, mx);
        for(auto a : m)
        {
        	if(a.second == mx)
        	{
        		res.push_back(a.first);
        	}
        }
        return res;

    }

    void inorder(TreeNode *node, unordered_map<int, int> &m, int &mx)
    {
    	if(!node) return;
    	inorder(node->left, m, mx);
    	mx = max(mx, ++m[node->val]);
    	inorder(node->right, m, mx);
    }
};