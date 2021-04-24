class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        int value[] = {1000, 500, 100, 50, 10, 5, 1};
        char str[] = {'M','D','C','L','X','V','I'};
        map<char, int> m;
        for(int i = 0; i < 7; i++)
            m[str[i]] = value[i];
        
        int ptr = 0;

        while(ptr < s.size())
        {
            if(ptr+1 < s.size() && m[s[ptr+1]] > m[s[ptr]])
                res -= m[s[ptr]];
            else
                res += m[s[ptr]];
            ptr++;
        }
        return res;  
    }
};