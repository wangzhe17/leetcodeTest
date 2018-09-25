class Solution {
public:
    string reverseStr(string s, int k) 
    {
        int n = s.size(), cnt = n / k;
        for (int i = 0; i <= cnt; ++i)
        {
        	if (i % 2 == 0)
        	{
        		if(i * k + k < n)
        		{
        			reverse(s.begin() + i * k, s.begin() + i * k + k);
        		}
        		else
        		{
        			reverse(s.begin() + i * k, s.end());
        		}
        	}
        }
        return s;
    }
};