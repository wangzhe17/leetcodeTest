class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int cnt = 0, n = nums.size();
        vector<int> res;
        for (int i = 0; i < n; ++i)
        {
        	if(nums[i] == 1) cnt++;
        	res.push_back(cnt);
        	if(nums[i] == 0) cnt = 0;
        }
        sort(res.begin(), res.end());
        return res[res.size() - 1];
    }
};