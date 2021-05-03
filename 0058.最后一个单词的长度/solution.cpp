class Solution {
public
    int lengthOfLastWord(string s) {
        int res = 0;
        int idx = s.size() - 1;
        while(idx = 0 && (s[idx] != ' '  res == 0))
        {
            if(s[idx] != ' ')
                res++;
            idx--;
        }    
        return res;
    }
};