class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(int num : nums)
            sum += num;
        int diff = sum - target;
        if(diff < 0 || diff % 2 != 0) return 0;
        int neg = diff/2;
        vector<int> vec(neg+1);
        vec[0] = 1;
        for(int i = 0; i < nums.size(); i++)
            for(int j = neg; j >= nums[i]; j--)
                    vec[j] = vec[j] + vec[j - nums[i]];
        return vec[neg];
    }
};