class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int mn = INT_MAX, res = 0;
        for(int num : nums) mn = min(mn, num);
        for(int num : nums) res += num - mn; //res = res + (num - mn)
        return res;
    }
};