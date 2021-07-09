class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = -1;
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(count == 0)
            {
                res = nums[i];
                count++;
                continue;
            }
            if(res == nums[i]){
                count++;
                continue;
            }
            count--;
        }
        count = 0;
        for(int i : nums)
            count += i == res ? 1 : 0;
        return count*2 > nums.size() ? res : -1;
    }
};