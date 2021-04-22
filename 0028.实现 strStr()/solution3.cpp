class Solution {
public:
    void GetNext(int* next, string s)
    {
        next[0] = -1;
        int k = -1;
        for(int i = 1; i < s.size(); i++)
        {
            while(k>=0 && s[k+1] != s[i])
                k = next[k];
            if(s[k+1] == s[i])
                k++;
            next[i] = k;
        }
    }

    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if(needle.size() > haystack.size()) return -1;
        
        int next[needle.size()+1];
        GetNext(next, needle);
        
        int k = -1;
        for(int i = 0; i < haystack.size(); i++)
        {
            while(k>=0 && haystack[i] != needle[k+1])
                k = next[k];
            if(needle[k+1] == haystack[i])
                k++;
            if(k+1 == needle.size())
                return i - k;
        }
        return -1;
    }
};