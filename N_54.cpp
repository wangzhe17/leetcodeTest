class Solution
{
public:
	int lengthOfLastWord(string s)
	{
		int len = s.length();
		int left = 0;
		int right =len - 1;
		int cnt = 0;
		while(s[left] == ' ') ++left;
		while(s[right] == ' ') --right;
		for (int i = left; i <= right; ++i)
		{
			if(s[i] == ' ') cnt = 0;
			else cnt++;
		}
		return cnt;
	}
};