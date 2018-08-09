class Solution
{
public:
	void connect(TreeLinkNode *root)
	{
		TreeLinkNode *p = root->next;
		while(p)
		{
			if(p->left)
			{
				p = p->left;
				break;
			}
			if(p->right)
			{
				p = p->right;
				break;
			}
			p = p->next;
		}
		if(root->right) root->right->next = p;
		if(root->left) root->left->next = root->right ? root->right : p;
		connect(root->right);
		connect(root->left);
	}

	void connect(TreeLinkNode *root)
	{
		if(!root) return;
		queue<TreeLinkNode*> q;
		q.push(root);
		while(!q.empty())
		{
			int len = q.size();
			for (int i = 0; i < len; ++i)
			{
				TreeLinkNode *t = q.front();
				q.pop();
				if(i < len - 1) t->next = q.front();
				if(t->left) q.push(t->left);
				if(t->right) q.push(t->right);
			}
		}
	}

	void connect(TreeLinkNode *root)
	{
		TreeLinkNode *dummy = new TreeLinkNode(0), *t = dummy;
		while(root)
		{
			if(root->left)
			{
				t->next = root->left;
				t = t->next;
			}
			if(root->right)
			{
				t->next = root->right;
				t = t->next;
			}
			root = root->next;
			if (!root)
			{
				t = dummy;
				root = dummy->next;
				dummy->next = NULL;
			}
		}
	}
}