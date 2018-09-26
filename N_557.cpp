class Solution {
public:
    string reverseWords(string s) 
    {
        string res ="", t="";
        istringstream is(s);
        while(is >> t)
        {
        	reverse(t.begin(), t.end());
        	res += t + " ";
        }
        res.pop_back();
        return res;
    }

    string reverseWords(string s) 
    {
        int start = 0, end = 0, n = s.size();
        while(start < n && end < n)
        {
        	while(end < n && s[end] != ' ') ++end;
        	for (int i = start, j = end - 1; i < j; ++i, --j)
        	{
        		swap(s[i], s[j]);
        	}
        	start = ++end;
        }
        return s;
    }
};