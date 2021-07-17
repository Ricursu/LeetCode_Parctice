class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max = nums[0];
        for(int i : nums){
            sum = sum + i > i ? sum + i : i;
            max = max > sum ? max : sum;
        }
        return max;
    }
};