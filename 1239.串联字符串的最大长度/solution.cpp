class Solution {
public:
    int maxLength(vector<string>& arr) {
        int res = 0;
        dfs(arr, res, "", 0);
        return res;
    }
    void dfs(vector<string>& arr, int& res, string s, int index)
    {
        if(index == arr.size())
        {
            int len = s.size();
            if(len <= res) return;
            bool isuse[26] = {false};
            for(int i = 0; i < len; i++)
            {
                if(isuse[s[i]-'a'])
                    return;
                else
                    isuse[s[i]-'a'] = true;
            }
            res = len;
            return;
        }
        dfs(arr, res, s, index+1);
        dfs(arr, res, s+arr[index], index+1);
    }
};