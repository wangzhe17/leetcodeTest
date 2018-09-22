class Solution {
public:
    vector<int> constructRectangle(int area) 
    {
        int r = sqrt(area);
        while(area % r != 0) r--;
        return {area / r, r}; 
    }
};