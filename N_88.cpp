class Solution
{
public:
	void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
	{
		if (m <= 0 && n <= 0) return;
		int a = 0, b = 0;
		vector<int> nums3;
		while(a < m || b < n)
		{
			if(a < m && b < n)
			{
				if (nums1[a] <= nums2[b])
				{
					nums3.push_back(nums1[a]);
					a++;
				}
				if (nums1[a] > nums2[b])
				{
					nums3.push_back(nums2[b]);
					b++;
				}
			}
			else if (a < m)
			{
				nums3.push_back(nums1[a]);
				a++;
			}
			else if (b < n)
			{
				nums3.push_back(nums2[b]);
				b++;
			}
		}
		nums1 = nums3;
	}
};