class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) 
    {
        double res = -1;
        for(auto m : points)
        	for(auto n : points)
        		for(auto p : points)
        		{
        			double tmpArea = 0.5 * abs(m[0]*n[1] + n[0]*p[1] + p[0]*m[1] - m[0]*p[1] - n[0]*m[1] - p[0]*n[1]);
        			res = max(res, tmpArea);
        		}
        return res;
    }
};