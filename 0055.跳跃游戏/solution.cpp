class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i > n) return false;
            n = max(n, i + nums[i]);
        }
        return true;
    }
};