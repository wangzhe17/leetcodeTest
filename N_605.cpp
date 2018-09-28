class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        for (int i = 0; i < flowerbed.size(); ++i)
        {
        	if(n == 0) return true;
        	if(flowerbed[i] == 0)
        	{
        		int next = (i == flowerbed.size() - 1 ? 0 : flowerbed[i + 1]);
        		int pre = (i == 0 ? 0 : flowerbed[i - 1]);
        		if(next + pre == 0)
        		{
        			flowerbed[i] = 1;
        			--n;
        		}
        	}
        }
        return n <= 0;
    }
};