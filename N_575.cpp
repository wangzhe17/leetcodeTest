class Solution {
public:
    int distributeCandies(vector<int>& candies) 
    {
        unordered_set<int> s;
        for(int candy : candies) s.insert(candy);
        return min(s.size(), candies.size() / 2);
    }
};