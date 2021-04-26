class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int sum = pow(2, nums.size()) - 1;
        for(int i = 0; i <= sum; i++)
        {
            vector<int> vec;
            int t = i;
            int idx = 0;
            while(t)
            {
                if(t%2==1) vec.push_back(nums[idx]);
                t = t>>1;
                idx++;
            }
            res.push_back(vec);
        }
        return res;
    }
};