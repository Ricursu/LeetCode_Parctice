class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1);
        for(int i = 1; i <= n; i++)
        {
            int count = 5;
            for(int j = 1; j*j <= i; j++)
                count = min(count, dp[i - j*j]);
            dp[i] = count + 1;
        }
        return dp[n];
    }
};