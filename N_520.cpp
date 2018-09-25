class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int cnt = 0, n = word.length();
        for (int i = 0; i < n; ++i)
        {
        	if(word[i] <= 'Z') cnt++;
        }
        return cnt == 0 || cnt == n || (cnt == 1 && word[0] <= 'Z');
    }
};