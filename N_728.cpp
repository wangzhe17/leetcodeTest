class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
    	vector<int> res;
    	for (int i = left; i <= right; ++i)
    	{
    		if(check(i)) res.push_back(i);
    	}
    	return res;
    }
    bool check(int num)
    {
    	string str = to_string(num);
    	for(char c : str)
    	{
    		if(c == '0' || num % (c - '0')) return false;
    	}
    	return true;
    }
};