class Solution
{
public:
    bool containsDuplicate(vector<int>& nums) 
    {
    	int n = nums.size();
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = i + 1; j < n; ++j)
    		{
    			if[nums[i] == nums[j]] return true;
    		}
    	}

    	return false;
    }

    bool containsDuplicate(vector<int>& nums) 
    {
    	unordered_map<int, int> m;
    	for (int i = 0; i < nums.size(); ++i)
    	{
    		if(m.find(nums[i]) != m.end()) return true;
    		++m[nums[i]];
    	}
    	return false;
    }

    bool containsDuplicate(vector<int>& nums) 
    {
    	sort(nums.begin(), nums.end());
    	for (int i = 1; i < nums.size(); ++i)
    	{
    		if(nums[i] == nums[i - 1]) return true;
    	}
    	return false;
    }
};