class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if(needle.size() > haystack.size()) return -1;
        int res = -1;
        for(int i = 0; i < haystack.size() - needle.size() + 1; i++)
        {
            bool isStr = true;
            int t = i, j = 0;
            while(t < haystack.size() && j < needle.size())
            {
                if(haystack[t+a+] != needle[j++])
                {
                    isStr = false;
                    break;
                }
            }
            if(isStr)
                return i;
        }
        return -1;
    }
};