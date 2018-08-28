class Solution
{
public:
	TreeNode* sortedArrayToBST(vector<int> &num)
	{
		return sortedArrayToBST(num, 0, num.size() - 1)
	}

	TreeNode* sortedArrayToBST(vector<int> &num, int left, int right)
	{
		if(left > right) return NULL;
		int mid = left + (right - left) / 2;
		TreeNode *cur = new TreeNode(num[mid]);
		cur->left = sortedArrayToBST(num, left, mid);
		cur->right = sortedArrayToBST(num, mid + 1, right);
		return cur;
	}
};