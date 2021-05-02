class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while(r >= l)
        {
            int mid = (l + r)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] >= nums[0])
            {
                if(nums[mid] > target && target >= nums[0])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            else
            {
                if(nums[nums.size() - 1] >= target && target > nums[mid])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        return -1;
    }
};