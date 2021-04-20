class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if(needle.size() > haystack.size()) return -1;
        int res = -1;
        for(int i = 0; i < haystack.size() - needle.size() + 1; i++)
        {
            bool isStr = false;
            int t = i;
            int j = 0;
            while(t < haystack.size() && j < needle.size())
            {
                if(haystack[t] == needle[j])
                    isStr = true;
                else
                {
                    isStr = false;
                    break;
                }
                j++;
                t++;
            }
            if(isStr)
            {
                res = i;
                break;
            }
        }
        return res;
    }
};