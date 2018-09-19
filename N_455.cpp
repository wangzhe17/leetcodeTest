class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int res = 0, p = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); ++i)
        {
        	if(s[i] >= g[p])
        	{
        		++res;
        		++p;
        		if(p >= g.size()) break;
        	}
        }
        return res;
    }
};