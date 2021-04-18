class Solution {
public:
    pair<int, int> expand(string s, int left, int right)
    {
        while(left >= 0 && right < s.size() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return {left + 1, right - 1};
    }

    string longestPalindrome(string s) {
        
        int begin = 0;
        int maxLen = 0;
        for(int i = 0; i < s.size(); i++)
        {
            auto[left1, right1] = expand(s, i, i);
            auto[left2, right2] = expand(s, i, i + 1);
            if(right1 - left1 + 1 > maxLen)
            {
                maxLen = right1 - left1 + 1;
                begin = left1;
            }
            if(right2 - left2 + 1 > maxLen)
            {
                maxLen = right2 - left2 + 1;
                begin = left2;
            }
        }

        return s.substr(begin, maxLen);
    }
};