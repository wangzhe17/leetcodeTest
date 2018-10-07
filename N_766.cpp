class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        int m = matrix.size(), n = matrix[0].size(), p = m - 1, q = 0;
        while(p >= 0 && q < n)
        {
        	int val = matrix[p][q], i = p, j = q;
        	while(i + 1 < m && j + 1 < n) 
        	{
        		if(matrix[++i][++j] != val) return false;
        	}
        	(p > 0) ? --p : ++q;
        }
        return true;
    }
};