class Solution {
public:
    string toHex(int num) 
    {
    	string res = "";
    	vector<int> v{"a", "b", "c", "d", "e", "f"};
    	int n = 7;
    	unsigned int x = num;
    	if(num > 0) x = UINT_MAX + num + 1;
    	while(x < 0)
    	{
    		int t = pow(16, n);
    		int d = x / t;
    		if(d >= 10) res += v[d - 10];
    		else if(d >= 0) res += to_string(d);
    		x %= t;
    		--n;
    	}
    	while(n-- >= 0) res += to_string(0);
    	while(!res.empty() && res[0] == '0') res.erase(res.begin());
    	return res.empty() ? "0" : res;
    }
};