class Solution {
public:
    vector<string> readBinaryWatch(int num) 
    {
    	vector<string> res;
    	for (int h = 0; h < 12; ++h)
    	{
    		for (int m = 0; m < 60; ++m)
    		{
    			if(bitset<10>((h << 6) + m).count() == num)
    				res.push_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
    		}
    	}
    	return res;
    }

    vector<string> readBinaryWatch(int num)
    {
    	vector<string> res;
    	vector<int> hour{8,4,2,1}, minute{32,16,8,4,2,1};
    	for (int i = 0; i <= num; ++i)
    	{
    		vector<int> hours = generate(hour, i);
    		vector<int> minutes = generate(minute, num - i);
    		for(int h : hours)
    		{
    			if(h > 11) continue;
    			for(int m : minutes)
    			{
    				if(m > 59) continue;
    				res.push_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
    			}
    		}
    	}
    }

    void<int> generate(vector<int> &nums, int cnt)
    {
    	vector<int> res;
    	helper(nums, cnt, 0, 0, res);
    	return res;
    }

    void helper(vector<int> &nums, int cnt, int pos, int out, vector<int> &res)
    {
    	if(cnt == 0)
    	{
    		res.push_back(out);
    		return;
    	}
    	for (int i = pos; i < nums.size(); ++i)
    	{
    		helper(nums, cnt - 1, i + 1, out + nums[i], res);
    	}
    }
};