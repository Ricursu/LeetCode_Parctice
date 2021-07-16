class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while(l <= r && nums[l] < target)
            l++;
        while(r >= 0 && nums[r] > target)
            r--;
        return l <= r ? r-l+1 : 0;
    }
};