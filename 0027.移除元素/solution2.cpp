class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowptr = 0;
        int fastptr = 0;
        for(fastptr; fastptr < nums.size(); fastptr++)
            if(nums[fastptr] != val)
                nums[slowptr++] = nums[fastptr];
        return slowptr;
    }
};