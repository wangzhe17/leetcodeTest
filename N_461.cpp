class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int res = 0, exec = x ^ y;
        for (int i = 0; i < 32; ++i)
        {
        	res += exec & 1;
        	exec >>= 1;
        }
        return res;
    }
};