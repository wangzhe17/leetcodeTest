class Solution {
public:
    string licenseKeyFormatting(string S, int K) 
    {
        string res = "";
        int cnt = 0, n = S.size();
        for (int i = n - 1; i >= 0; --i)
        {
        	char c = S[i];
        	if(c == '-') continue;
        	if(c >= 'a' && c <= 'z') c -= 32;
        	res.push_back(c);
        	if(++cnt % K == 0) res.push_back('-');
        }
        if(!res.empty() && res.back() == '-') res.pop_back();
        return string(res.rbegin(), res.rend()); 
    }
};