class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int res = 0;
        dfs(nums, target, 0, 0, res);
        return res;
    }
    void dfs(vector<int>& nums, int target, int index, int sum, int& res)
    {
        if(index == nums.size())
        {
            if(sum == target)   res++;
            return;
        }
        dfs(nums, target, index+1, sum+nums[index], res);
        dfs(nums, target, index+1, sum-nums[index], res);
    }
};