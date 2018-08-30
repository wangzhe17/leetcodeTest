#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

/*
class Solution
{
public:
	static int getMax(vector<int> &arr, int L, int R)
	{
		if(L == R)
		{
			return arr[L];
		}
		int mid = (L + R);
		int maxLeft = getMax(arr, L, mid);
		int maxRight = getMax(arr, mid + 1, R);
		return max(maxLeft, maxRight);
	}
};
*/
	static int getMax(int *arr, int L, int R)
	{
		if(L == R)
		{
			return arr[L];
		}
		int mid = (L + R);
		int maxLeft = getMax(arr, L, mid);
		int maxRight = getMax(arr, mid + 1, R);
		return max(maxLeft, maxRight);
	}
int main()
{
//	Solution s;
	int arr[4] = {1, 2, 3, 4};
	int max = getMax(arr, 0, 3);
	cout << "max";
	return 0;
}