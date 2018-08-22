class Solution{
public:
	int removeElement(vector<int>& nums, int val)
	{
/*		int n = nums.size();
		for (int i = 0; i < n; ++i)
		{
			if (nums[i] == val)
			{
				nums.erase(nums.begin() + i);
			}
		}
		return nums.size();*/
		int res = 0;
		for (int i = 0; i < nums.size(); ++i)
		{
			if (nums[i] != val)
			{
				nums[res] = nums[i];
				res++;
			}
		}
		return res;
	}
};