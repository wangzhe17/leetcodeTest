class Solution {
public:
    vector<string> findWords(vector<string>& words) 
    {
        vector<string> res;
        unordered_set<char> row1{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> row2{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> row3{'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        for(string word : words)
        {
        	int one = 0, two = 0, three = 0;
        	for(char c : word)
        	{
        		if(row1.count(c)) one = 1;
        		if(row2.count(c)) two = 1;
        		if(row3.count(c)) three = 1;
        		if(one + two + three > 1) break;
        	}
        	if(one + two + three == 1) res.push_back(word);
        }

        return res;
    }
};