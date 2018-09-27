class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
    	if(nums.empty()) return 0;
    	int res = 0;
    	map<int, int> m;
    	for(int num : nums) ++m[num];
    	for(auto it = next(m.begin()); it != m.end(); ++it)
    	{
    		auto pre = prev(it);
    		if(it->first == pre->first + 1)
    		{
    			res = max(res, it->second + pre->second);
    		}
    	}
    	return res;
    }
};