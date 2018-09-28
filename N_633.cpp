class Solution {
public:
    bool judgeSquareSum(int c) {
        for (int i = sqrt(c); i >= 0 ; --i)
        {
        	if(i * i == c) return true;
        	int t = c - i * i, d = sqrt(t);
        	if(d * d == t) return true;
        }
        return false;
    }
};