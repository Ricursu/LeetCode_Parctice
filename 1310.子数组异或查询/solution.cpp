class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> res;
        vector<int> tempRes;
        tempRes.push_back(arr[0]);
        for(int i = 1; i < arr.size(); i++)
        {
            int t = tempRes[tempRes.size() - 1];
            tempRes.push_back(t^arr[i]);
        }
        for(int i = 0; i < queries.size(); i++)
        {
            int t = tempRes[queries[i][1]];
            if(queries[i][0] - 1 >= 0)
            {
                t = t ^ tempRes[queries[i][0] - 1];
            }
            res.push_back(t);
        }
        return res;
    }
};