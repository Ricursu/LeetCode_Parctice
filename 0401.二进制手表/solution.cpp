class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        for(int i = 0; i < 1024; i++)
        {
            int h = i >> 6, l = i&63;
            if(h < 12 && l < 60 && __builtin_popcount(i) == turnedOn)
                res.push_back(to_string(h) + ":" + (l < 10 ? "0" : "") + to_string(l));
        }
        return res;
    }
};