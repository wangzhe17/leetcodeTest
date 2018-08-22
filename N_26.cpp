class Solution{
public:
	int removeDuplicates(vector<int>& nums)
	{
/*		int n = nums.size();
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				if (nums[i] == nums[j])
				{
					nums.erase(nums.begin() + i);
				}
			}
		}
		return nums.size();*/
		if(nums.empty()) return 0;
		int pre = 0, cur = 0, n = nums.size();
		while(cur < n)
		{
			if(nums[pre] == nums[cur]) ++cur;
			else nums[++pre] = nums[cur++];
		}
		return pre+1;
	}
};