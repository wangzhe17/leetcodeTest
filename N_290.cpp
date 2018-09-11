class Solution 
{
public:
    bool wordPattern(string pattern, string str) 
    {
        unordered_map<char, string> m;
        istringstream in(str);
        int i = 0;
        for(string word; in >> word; ++i)
        {
        	if(m.find(pattern[i]) != m.end())
        	{
        		if(m[pattern[i]] != word) return false;
        	}else
        	{
        		for(auto it = m.begin(); it != m.end(); ++it)
        		{
        			if(it->second == word) return false;
        		}
        		m[pattern[i]] = word;
        	}
        }
        return i == pattern.size();
    }
};