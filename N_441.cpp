class Solution {
public:
    int arrangeCoins(int n) 
    {
    	int cur = 1, rem = n - 1;
    	while(rem >= cur + 1)
    	{
    		++cur;
    		rem -= cur;
    	}
    	return n == 0 ? 0 : cur;
    }

};