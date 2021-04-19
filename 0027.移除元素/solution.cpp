class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int fast = 0;
        int res = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(fast < i) fast = i;
            while(nums[i] == val && fast < nums.size())
            {
                if(nums[fast] != val)
                {
                    swap(nums, i, fast);
                    break;
                }
                fast++;
            }
            if(nums[i] != val)
            {
                res++;
            }
        }
        return res;
    }

    void swap(vector<int>& nums, int i , int j)
    {
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
};