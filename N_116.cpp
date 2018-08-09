class Solution
{
public:
	void connect(TreeLinkNode *root)
	{
		if(!root) return;
		if(root->left) root->left->next = root->right;
		if(root->right) root->right->next = root->next ? root->next->left : NULL;
		connect(root->left);
		connect(root->right);
	}

	void connect(TreeLinkNode *root)
	{
		if(!root) return;
		queue<TreeLinkNode*> q;
		q.push(root);
		q.push(NULL);
		while(true)
		{
			TreeLinkNode *cur = q.front();
			q.pop()
			if(cur)
			{
				cur->next = q.front();
				if(cur->left) q.push(cur->left);
				if(cur->right) q.push(cur->right);
			}else
			{
				if(q.size() == 0 || q.front() == NULL) return;
				q.push(NULL);
			}
		}
	}
}