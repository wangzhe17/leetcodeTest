class Solution
{
public:
	int maxDepth(TreeNode *root)
	{
/*		if(!root) return 0;
		return 1 + max(maxDepth(root->left), maxDepth(root->right));*/
		if(!root) return 0;
		int res = 0;
		queue<TreeNode *> q;
		q.push(root);
		while(!q.empty())
		{
			++res;
			
			int n = q.size();
			for (int i = 0; i < n; ++i)
			{
				TreeNode *node = q.front(); q.pop();
				if(node->left) q.push(node->left);
				if(node->right) q.push(node->right);
			}
		}
		return res;
	}
};