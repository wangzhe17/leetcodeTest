class Solution {
public:
    bool validPalindrome(string s) 
    {
        int left = 0, right = s.size() - 1;
        while(left < right)
        {
        	if(s[left] != s[right]) return isValid(s, left, right - 1) || isValid(
        		s, left + 1, right);
        	++left, --right;
        }
        return true;
    }

    bool isValid(string s, int left, int right)
    {
    	while(left < right)
    	{
    		if(s[left] != s[right]) return false;
    		++left;
    		--right;
    	}
    	return true;
    }
};