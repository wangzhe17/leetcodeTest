class Solution{
public:
	string longestCommonPrefix(vector<string>& strs)
	{
/*		string res = "";
		int n = strs.size();
		for (int i = 0; i < n && i + 1 < n; ++i)
		{
			for (int j = 0; j < strs[i].length(); ++j)
			{
				if (strs[i][j] == strs[i + 1][j])
				{
					res.push_back(strs[i][j]);
				}
			}
		}
		return res;*/
		if (strs.empty()) return "";
		string res = "";
		for (int j = 0; j < strs[0].size(); ++j)
		{
			char c = strs[0][j];
			for (int i = 1; i < strs.size(); ++i)
			{
				if (j >= strs[i].size() || strs[i][j] != c)
				{
					return res;
				}
			}
			res.push_back(c);
		}
		return res;
	}
};