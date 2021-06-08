class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum = 0;
        for(int num : stones) sum += num;
        vector<int> dp(sum/2+1);
        for(int i = 0; i < stones.size(); i++)
            for(int j = sum/2; j >= stones[i]; j--)
            {
                dp[j] = max(dp[j], dp[j-stones[i]] + stones[i]);
            }

        return sum - 2*dp[sum/2];
    }
};