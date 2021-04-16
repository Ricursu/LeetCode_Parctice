class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        vector<char> vec[numRows];
        int index = 0;
        int high = 1;
        int level = 0;
        while(index < s.size())
        {
            vec[level].push_back(s[index]);
            index++;
            if(level + high > numRows - 1 || level + high < 0)
                high = -high;
            level = level + high;
        }
        string res;
        for(int i = 0; i < numRows; i++)
            res.insert(res.end(), vec[i].begin(), vec[i].end());
        return res;
    }
};