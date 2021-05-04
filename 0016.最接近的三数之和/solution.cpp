class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int res = 999999;
        for(int i = 0; i <= n - 3; i++)
        {
            int l = i + 1;
            int r = n - 1;
            while(l < r)
            {
                int temp = nums[i] + nums[l] + nums[r];
                if(abs(target - temp) < abs(target - res))
                    res = temp;
                if(target - temp > 0)
                    l++;
                else
                    r--;
            }
        }
        return res;
    }
};