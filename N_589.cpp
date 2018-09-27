class Solution {
public:
    vector<int> preorder(Node* root) 
    {
        vector<int> res;
        if(!root) return res;
        stack<Node*> s;
        s.push(root);
        while(!s.empty())
        {
        	Node *node = s.top();
        	s.pop();
        	res.push_back(node->val);
        	for(auto it = node->children.rbegin(); it != node->children.rend(); it++)
        	{
        		s.push(*it);
        	}
        } 
        return res;
    }

    void preorder(Node *root, vector<int> &res)
    {
    	if(!root) return;
    	res.push_back(root->val);
    	for(auto a : root->children)
    		preorder(a, res);
    }

    vector<int> preorder(Node *root)
    {
    	vector<int> res;
    	preorder(root, res);
    	return res;
    }
};