class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        res.push_back(-1);
        res.push_back(-1);
        if(nums.size() == 0) return res;
        int l = 0, r = nums.size() - 1;
        while(r >= l && (nums[l] != target || nums[r] != target))
        {
            if(nums[l] != target)
                l++;
            if(nums[r] != target)
                r--;
        }
        if(l <= r)
        {
            res[0] = l;
            res[1] = r;
        }

        return res;
    }
};