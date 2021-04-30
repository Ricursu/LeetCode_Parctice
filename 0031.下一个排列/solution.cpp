class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() <= 1) return ;
        int i = nums.size() - 2;
        int j = nums.size() - 1;
        int k = nums.size() - 1;

        while(i >= 0 && nums[i] >= nums[j])
        {
            i--;
            j--;
        }
        while(i >= 0 && k >= j && nums[i] >= nums[k])
            k--;
        if(i >= 0)
        {
            swap(nums, i, k);
            i = nums.size() -1;
        }
        else
        {
            i = nums.size() - 1;
            j = 0;
        }
        while(i > j)
        {
            swap(nums, i, j);
            j++;
            i--;
        }
    }

    void swap(vector<int>& nums, int i, int j)
    {
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
};