/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
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
    vector<vector<int>> levelOrder(Node* root) 
    {
    	vector<vector<int>> res;
    	if(root == NULL) return res;

    	queue<Node *> q;
    	q.push(root);
    	while(!q.empty())
    	{
    		vector<int> oneLevel;
    		int size = q.size();
    		for (int i = 0; i < size; ++i)
    		{
    			Node *node = q.front();
    			q.pop();
    			oneLevel.push_back(node->val);
    			for(auto node1 : node->children) q.push(node1);
    		}
    	res.insert(res.begin(), oneLevel);
    	}
    	return res;
    }
};