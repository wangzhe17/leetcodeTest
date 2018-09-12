class Solution 
{
public:
    string reverseString(string s) 
    {
        string str;
        int n = s.size();
        for (int i = n - 1; i >= 0; --i)
        {
        	str.push_back(s[i]);
        }
        return str;
    }
};