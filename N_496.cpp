class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) 
    {
        vector<int> res(findNums.size());
        for (int i = 0; i < findNums.size(); ++i)
        {
        	int j = 0, k = 0;
        	for (; j < nums.size(); ++j)
        	{
        		if(nums[j] == findNums[i]) break;
        	}
        	for (k = j + 1; k < nums.size(); ++k)
        	{
        		if(nums[k] > nums[j])
        		{
        			res[i] = nums[k];
        			break;
        		}
        	}
        	if(k == nums.size()) res[i] = -1;
        }

        return res;
    }
};