class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        set<vector<int>> s;
        vector<vector<int>> res;
        vector<int> temp;
        DFS(res, candidates, target, 0, temp, 0, s);
        return res;
    }

    void DFS(vector<vector<int>>& res, vector<int>& candidates, int target, int sum, vector<int>& temp, int idx, set<vector<int>>& s)
    {
        if(sum == target)
        {
            if(s.count(temp) == 0)
            {
                res.push_back(temp);
                s.insert(temp);
            }
            return;
        }
        else if(sum > target)
            return;
        else if(idx < candidates.size())
        {
            temp.push_back(candidates[idx]);
            DFS(res, candidates, target, sum+candidates[idx], temp, idx+1, s);
            temp.pop_back();
            DFS(res, candidates, target, sum, temp, idx+1, s);
        }
    }
};