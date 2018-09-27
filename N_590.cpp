class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        postorder(root, res);
        return res;
    }

    void postorder(Node *root, vector<int> &res)
    {
    	if(!root) return;
    	for(auto n : root->children)
    		postorder(n, res);
    	res.push_back(root->val);
    }
};