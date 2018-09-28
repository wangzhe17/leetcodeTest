class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
        	int n = q.size();
        	double sum = 0;
        	for (int i = 0; i < n; ++i)
        	{
        		TreeNode *t = q.front(); q.pop();
        		sum += t->val;
        		if(t->left) q.push(t->left);
        		if(t->right) q.push(t->right);
        	}
        	res.push_back(sum / n);
        }
        return res;
    }
};