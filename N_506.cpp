class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) 
    {
        int n = nums.size(), cnt = 1;
        vector<string> res(n, "");
        priority_queue<pair<int, int>> q;
        for (int i = 0; i < n; ++i)
        {
        	q.push({nums[i], i});
        }
        for (int i = 0; i < n; ++i)
        {
        	int idx = q.top().second();
        	q.pop();
        	if(cnt == 1) res[idx] = "Gold Medal";
        	else if(cnt == 2) res[idx] = "Silver Medal";
        	else if(cnt == 3) res[idx] = "Bronze Medal";
        	else res[idx] = to_string(cnt);
        	++cnt;
        }
        return res;
    }
};