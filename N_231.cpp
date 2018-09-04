class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
    	int cnt = 0;
    	while(n > 0)
    	{
    		cnt += (n & 1);
    		n >>= 1;
    	}
    	return cnt == 1;
    }
};