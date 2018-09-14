class Solution {
public:
    int longestPalindrome(string s) {
    	int res = 0;
        bool mid = false;
        unordered_map<char, int> m;
        for(auto c : s) ++m[c];
        for(auto it = m.begin(); it != m.end(); ++it)
        {
        	res += it->second;
        	if(it->second % 2 == 1)
        	{
        		res -= 1;
        		mid = true;
        	}
        }
        return mid ? res + 1 : res;
    }
};