class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> index;
		for (int i = 0; i < nums.size(); ++i)
		{
			for (int j = i + 1; j < nums.size(); ++j)
			{
				if (nums[i] + nums[j] == target)
				{
					index.push_back(i);
					index.push_back(j);
				}
			}
		}
		return index;
	}

	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> index;
		map<int, int> m;
		for (int i = 0; i < nums.size(); ++i)
		{
			m[nums[i]] = i;
		}
		for (int i = 0; i < nums.size(); ++i)
		{
			int t = target - nums[i];
			if (m.count(t) && m[t] != i)
			{
				index.push_back(i);
				index.push_back(m[t]);
				break;
			}
		}
		return index;
	}
};