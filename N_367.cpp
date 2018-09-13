class Solution {
public:
    bool isPerfectSquare(int num) {
/*    	if(num == 1) return true;
    	int i = 0;
        for (i = 0; i < num / 2; ++i)
        {
        	if(i * i == num) return true;
        }
        return false;*/
        int x = num / 2, t = x * x;
        while(t > num)
        {
        	x /= 2;
        	t = x * x;
        }
        for (int i = x; i < 2 * x ; ++i)
        {
        	if(i * i == num) return true; 
        }
        return false;
    }
};