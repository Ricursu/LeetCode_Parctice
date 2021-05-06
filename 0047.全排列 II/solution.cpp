class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        set<vector<int>> setVec;
        DFS(res, nums, 0, setVec);
        return res;
    }

    void DFS(vector<vector<int>>& res, vector<int>& nums, int idx, set<vector<int>>& setVec)
    {
        if(idx + 1 == nums.size())
        {
            if(setVec.count(nums) == 0)
            {
                setVec.insert(nums);
                res.push_back(nums);
            }
            return ;
        }
        DFS(res, nums, idx+1, setVec);
        for(int i = idx+1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1]) continue;
            swap(nums[idx], nums[i]);
            DFS(res, nums, idx+1, setVec);
            swap(nums[idx], nums[i]);
        }
    }
};