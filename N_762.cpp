class Solution {
public:
    int countPrimeSetBits(int L, int R) 
    {
    	int cnt = 0;
        for (int i = L; i <= R; ++i)
        {
        	if(check(i)) cnt++;
        }
        return cnt;
    }
    bool check(int n)
    {
    	int i = 0;
    	while(n != 0)
    	{
    		if(n & 1 == 1) i++;
    		n >>= 1;
    	}
    	if(checkZs(i)) return true;
    	return false;
    }
    bool checkZs(int n)
    {
    	if(n == 1) return false;
    	for (int i = 2; i < n; ++i)
    	{
    		if(n % i == 0) return false;
    	}
    	return true;
    }
};