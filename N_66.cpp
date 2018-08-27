class Solution{
public:
	vector<int> plusOne(vector<int> &digits)
	{
		int n = digits.size();
		int i = n - 1;
		for (i = n - 1; i >= 0; --i)
		{
			if (digits[i] == 9)
			{
				digits[i] = 0;
			}
			else {
				digits[i] += 1;
				return digits;
			}
		}
		if (digits[0] == 0)
		{
			digits.insert(digits.begin(), 1);
		}
		return digits;
	}
};