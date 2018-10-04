class Solution {
public:
    int repeatedStringMatch(string A, string B) 
    {
        int n1 = A.size(), n2 = B.size(), cnt = 1;
        string t = A;
        while(t.size() < n2)
        {
        	t += A;
        	++cnt;
        }
        if(t.find(B) != string::npos) return cnt;
        t += A;
        return (t.find(B) != string::npos) ? cnt + 1 : -1;
    }
};