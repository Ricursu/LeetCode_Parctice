class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int idx = -1;
        bool isCon = true;
        for(int i = 0; i < strs[0].size(); i++)
        {
            char c = strs[0][i];
            for(int j = 0; j < strs.size(); j++)
            {
                if(i >= strs[j].size() || strs[j][i] != c)
                    isCon = false;
                if(!isCon) break;
            }
            if(!isCon) break;
            idx++;
        }
        if(idx == -1)
            return "";
        return strs[0].substr(0, idx+1);
    }
};