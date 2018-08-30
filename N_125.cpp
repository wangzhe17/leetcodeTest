class Solution
{
public:
	bool isPalindrome(string s)
	{
		int n1 = s.length();
		string copy = "";
		for (int i = 0; i < n1; ++i)
		{
			if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
			{
				copy.push_back(s[i]);
			}
		}
		int n2 = copy.length();
		for (int i = 0; i < n2 / 2; ++i)
		{
			if ((copy[i] >= 'a' && copy[i] <= 'z') || (copy[i] >= 'A' && copy[i] <= 'Z'))
			{
				if (abs(copy[i] - copy[n2 - i- 1]) == 0 || abs(copy[i] - copy[n2 - i- 1]) == 32)
				{
					continue;
				}
				else
				{
					return false;
				}
			}
			if (copy[i] >= '0' && copy[i] <= '9')
			{
				if (copy[i] == copy[n2 - i- 1])
				{
					continue;
				}
				else
				{
					return false;
				}
			}
		}
		return true;
	}
};