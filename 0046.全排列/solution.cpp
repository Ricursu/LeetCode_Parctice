class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        DFS(res, nums, 0);
        return res;
    }

    void DFS(vector<vector<int>>& res, vector<int>& nums, int idx)
    {
        if(idx + 1 == nums.size())
        {
            res.push_back(nums);
            return ;
        }
        DFS(res, nums, idx+1);
        for(int i = idx+1; i < nums.size(); i++)
        {
            swap(nums[idx], nums[i]);
            DFS(res, nums, idx+1);
            swap(nums[idx], nums[i]);
        }
    }

};