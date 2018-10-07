class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int cnt = 1, cur = 0;
        for(char c : S)
        {
        	int t = widths[c - 'a'];
        	if(cur + t > 100) ++cnt;
        	cur = (cur + t > 100) ? t : cur + t;
        }
        return {cnt, cur};
    }
};