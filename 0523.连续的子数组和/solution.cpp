class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sum;
        sum.push_back(0);
        for (int i = 1; i <= n; i++) sum.push_back(sum[i - 1] + nums[i - 1]);
        set<int> sets;
        for (int i = 2; i <= n; i++) {
            sets.insert(sum[i - 2] % k);
            if (sets.count(sum[i] % k)>0) return true;
        }
        return false;
    }
};