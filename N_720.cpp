class Solution {
public:
    string longestWord(vector<string>& words) 
    {
        string res = "";
        int mxLen = 0;
        unordered_set<string> s(words.begin(), words.end());
        queue<string> q;
        for(string word : words)
        {
        	if(word.size() == 1) q.push(word);
        }
        while(!q.empty())
        {
        	string t = q.front(); q.pop();
        	if(t.size() > mxLen)
        	{
        		mxLen = t.size();
        		res = t;
        	}else if(t.size() == mxLen)
        	{
        		res = min(res, t);
        	}
        	for (char c = 'a'; c <= 'z'; ++c)
        	{
        		t.push_back(c);
        		if(s.count(t)) q.push(t);
        		t.pop_back();
        	}
        }
        return res;
    }
};