class Solution {
public:
    int getSum(int a, int b) 
    {
    	if(b == 0) return a;
    	int sum = a ^ b;
    	int carry = (a & b) << 1;
    	return getSum(sum, carry);
    }
    int getSum(int a, int b) 
    {
    	while(b)
    	{
    		int carry = (a & b) << 1;
    		a = a ^ b;
    		b = carry;
    	}
    	return a;
    }
};