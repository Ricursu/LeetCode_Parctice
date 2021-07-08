class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mp;
        int res = 0;
        int sum = 0;
        for(int i : nums)
        {
            mp[sum]++;
            sum += i;
            res += mp[sum - goal];
        }
        return res;
    }
};