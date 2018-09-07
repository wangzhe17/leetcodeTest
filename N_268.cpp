class Solution {
public:
    int missingNumber(vector<int>& nums) {
    	int res = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
        	if(nums[i] != res) break;
        	res++;
        }
        return res;
    }
};