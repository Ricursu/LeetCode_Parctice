class Solution {
public:
    bool xorGame(vector<int>& nums) {
        if(nums.size()%2 == 0) return true;
        int xors = 0;
        for(int num : nums)
            xors = xors ^ num;
        return xors == 0;
    }
};