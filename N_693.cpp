class Solution 
{
public:
    bool hasAlternatingBits(int n) 
    {
        int bit = -1;
        while(n > 0)
        {
        	if(n & 1 == 1)
        	{
        		if(bit == 1) return false;
        		bit = 1;
        	}else
        	{
        		if(bit == 0) return false;
        		bit = 0;
        	}
        	n >>= 1;
        }
        return true;
    }
};