class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double sum = accumulate(nums.begin(), nums.begin() + k, 0) res = sum;
        for (int i = k; i < nums.size(); ++i)
        {
        	sum += nums[i] - nums[i - k];
        	res = max(res, sum);
        }
        return res / k;
    }
};