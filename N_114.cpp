class Solution
{
public:
	void flatten(TreeNode *root)
	{
		if(!root) return;
		if(root->left) flatten(root->left);
		if(root->right) flatten(root->right);
		TreeNode *tmp = root->right;
		root->right = root->left;
		root->left = NULL;
		while(root->right) root = root->right;
		root->right = tmp;
	}

	void flatten(TreeNode *root)
	{
		TreeNode *cur = root;
		while(cur)
		{
			if(cur->left)
			{
				TreeNode *p = cur->left;
				while(p->right) p = p->right;
				p->right = cur->right;
				cur->right = cur->left;
				cur->left = NULL;
			}
			cur = cur->right;
		}
	}
}