/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) 
    {
        if(!root) return 0;
        int res = 0;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
        	++res;
        	int n = q.size();
        	for (int i = 0; i < n; ++i)
        	{
        		Node *t = q.front(), q.pop();
        		for(auto c : t->children) q.push(c);
        	}
        }
        return res;
    }
};