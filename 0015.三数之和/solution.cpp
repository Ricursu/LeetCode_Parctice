class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int len = nums.size();
        if(len < 3)   return res;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++)
        {
            //nums[i]是这个数字和中最小的数，如果nums[i]>0那后续就绝对不存在结果
            if(nums[i] > 0) return res;
            //num[i] == nums[i - 1]时，后续的情况都判断过了
            if(i > 0 and nums[i] == nums[i - 1])    continue;
            //定义双指针
            int L = i + 1;
            int R = len - 1;
            while(L < R)
            {
                if(nums[i] + nums[L] + nums[R] == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[L]);
                    temp.push_back(nums[R]);
                    res.push_back(temp);
                    while(L < R and nums[L] == nums[L+1])
                        L++;
                    while(L < R and nums[R] == nums[R-1])
                        R--;
                    L++;
                    R--;
                }
                else if(nums[i] + nums[L] + nums[R] > 0)
                    R--;
                else
                    L++;
            }
        }
        return res;
    }
};