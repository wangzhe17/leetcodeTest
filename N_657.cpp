class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int row = 0, col = 0;
        unordered_map<char, int> m;
        m['R'] = 0;
        m['L'] = 0;
        m['U'] = 0;
        m['D'] = 0;
        for (auto c : moves)
        {
        	if(c == 'R') row++;
        	else if(c == 'L') row--;
        	if(c == 'U') col++;
        	else if(c == 'D') col--;
        }
        return row == 0 && col == 0;
    }
};