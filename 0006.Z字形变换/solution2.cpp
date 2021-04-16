class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<char> vec;
        for(int i = 0; i < numRows; i++)
        {
            int index = i;
            int step = 2*numRows - 2;
            int add = 2*i;
            while(index < s.size())
            {
                vec.push_back(s[index]);
                add = step - add;
                index += (i == 0 || i == numRows - 1) ? step : add;
            }
        }
        string res = "";
        res.insert(res.begin(), vec.begin(), vec.end());
        return res;
    }
};