class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        int n = s.size();
        for (int i = n / 2; i >= 1; --i)
        {
        	if(n % i == 0)
        	{
        		int c = n / i;
        		string t = "";
        		for (int j = 0; j < c; ++j)
        		{
        			t += s.substr(0, i);
        		}
        		if(t == s) return true;
        	}
        	
        }

        return false;
    }
};