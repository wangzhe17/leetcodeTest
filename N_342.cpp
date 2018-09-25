class Solution 
{
public:
    bool isPowerOfFour(int num) 
    {
    	while(n && n % 4 == 0)
    	{
    		n /= 4;
    	}    
    	return n == 1;
    }
};