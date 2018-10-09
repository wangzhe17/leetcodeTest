class Solution {
public:
    string longestPalindrome(string s) 
    {
        string t = "$#";
        for (int i = 0; i < s.size(); ++i)
        {
        	t += s[i];
        	t += '#';
        }
        int p[t.size()] = {0}, id = 0, mx = 0, resId = 0, resMx = 0;
        for (int i = 0; i < t.size(); ++i)
        {
        	p[i] = mx > i ? min(p[2 * id - i], mx - i) : 1;
        	while(t[i + p[i]] == t[i - p[i]]) ++p[i];
        	if(mx < i + p[i])
        	{
        		mx = i + p[i];
        		id = i;
        	}
        	if(resMx < p[i])
        	{
        		resMx = p[i];
        		resId = i;        	}
        }
        return s.substr((resId - resMx) / 2, resMx - 1);
    }
};