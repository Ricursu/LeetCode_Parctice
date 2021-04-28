class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.size() == 0) return res;
        string s = "";
        CreateResult(digits, res, 0, s);
        return res;
    }

    void CreateResult(string digits, vector<string>& res, int idx, string str)
    {
        string temp[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(idx >= digits.size())
        {
            res.push_back(str);
            return;
        }
        for(int i = 0; i < temp[digits[idx] - '2'].size(); i++)
        {
            CreateResult(digits, res, idx+1, str+temp[digits[idx] - '2'][i]);
        }
    }
};