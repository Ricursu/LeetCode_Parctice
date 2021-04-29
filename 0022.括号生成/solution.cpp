class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        GetResult(res, n, 0, "");
        return res;
    }

    void GetResult(vector<string>& res, int l, int r, string s)
    {
        if(l == 0 && r == 0)
        {
            res.push_back(s);
            return ;
        }
        if(l != 0)
            GetResult(res, l - 1, r + 1, s + '(');
        if(r != 0)
            GetResult(res, l, r - 1, s + ')');
    }

};