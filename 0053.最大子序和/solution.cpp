class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre = 0, maxAns = nums[0];
        for(int i : nums)
        {
            pre = max(pre + i, i);
            maxAns = max(pre, maxAns);
        }
        return maxAns;
    }
};