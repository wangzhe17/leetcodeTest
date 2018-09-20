class Solution {
public:
    int findComplement(int num) 
    {
    	bool start = false;
    	for (int i = 31; i >= 0; --i)
    	{
    		if(num & (1<<i)) start = true;
    		if(start) num^=(1<<i);
    	}
    	return num;
    }
};