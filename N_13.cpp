class Solution{
public:
	int romanToInt(string s)
	{
		int res = 0;
		map<string, int> m;
		vector<char> ch;
		map["I"] = 1;
		map["V"] = 5;
		map["X"] = 10;
		map["L"] = 50;
		map["C"] = 100;
		map["D"] = 500;
		map["M"] = 1000;
		for (int i = 0; i < s.length(); ++i)
		{
			int val = m[s[i]];
			if(m[s[i+1]] <= m[s[i]]) res += val;
			else res -= val;
		}
		return res;
	}
};