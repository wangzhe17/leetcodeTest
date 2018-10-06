class Solution {
public:
    int countBinarySubstrings(string s) 
    {
        int zeros = 0, ones = 0, res = 0;
        for (int i = 0; i < s.size(); ++i)
        {
        	if(i == 0)
        	{
        		(s[i] == '1') ? ++ones : ++zeros;
        	}else 
        	{
        		if(s[i] == '1')
        		{
        			ones = (s[i - 1] == '1') ? ones + 1 : 1;
        			if(zeros >= ones) ++res;
        		}else
        		if(s[i] == '0')
        		{
        			zeros = (s[i - 1] == '0') ? zeros + 1 : 1;
        			if(ones >= zeros) ++res;
        		}
        	}
        }
        return res;
    }
};