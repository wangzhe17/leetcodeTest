class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        int res = 0, n = nums.size();
        unordered_map<int, int> m;
        for(int num : nums) ++m[num];
        for(auto a : m)
        {
        	if(k == 0 && a.second > 1) ++res;
        	if(k > 0 && m.count(a.first + k)) ++res;
        }
        return res;
    }
};