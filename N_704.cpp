class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int left = 0, right = n - 1;
        
        while(left < right)
        {
        	int mid = left + (right - left) / 2;
        	if(nums[mid] == target) return mid - 1;
        	else if(nums[mid] > target) right = mid + 1;
        	else left = mid;
        }
        return -1;
    }
};