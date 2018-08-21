class Solution{
public:
    bool isPalindrome(int x) {
		int res = 0;
		if (x < 0 || (x  % 10 == 0 && x != 0)) return false;
		while (x != 0) {
			res = res * 10 + x % 10;
			x /= 10;
		}
		return res == x;
    }
};