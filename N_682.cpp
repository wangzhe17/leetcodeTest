class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        vector<int> v;
        for(string op : ops)
        {
        	if(op == '+') v.push_back(v.back() + v[v.size() - 2]);
        	else if(op == 'D') v.push_back(v.back() * 2);
        	else if(op == 'C') v.pop_back();
        	else v.push_back(stoi(op)); 
        }
        return accumulate(v.begin(), v.end(), 0);
    }
};