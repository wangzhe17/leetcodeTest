class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int n = nums.size(), i = 0, j = n - 1;
        vector<int> t = nums;
        sort(t.begin(), t.end());
        while(i < n && nums[i] == t[i]) ++i;
        while(i < j && nums[j] == t[j]) --j;
        return j - i + 1;
    }
};