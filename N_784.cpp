class Solution {
public:
    vector<string> letterCasePermutation(string S) 
    {
        vector<string> res = {""};
        for(char c : S)
        {
        	int len = res.size();
        	if(c >= '0' && c <= '9')
        	{
        		for(string &str : res) str.push_back(c);
        	}else
        	{
        		for (int i = 0; i < len; ++i)
        		{
        			res.push_back(res[i]);
        			res[i].push_back(tolower(c));
        			res[len + i].push_back(toupper(c));
        		}
        	}
        }
        return res;
    }
};