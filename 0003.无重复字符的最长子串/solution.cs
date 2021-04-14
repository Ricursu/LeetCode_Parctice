public class Solution {
    public int LengthOfLongestSubstring(string s) {
        int res = 0;
        HashSet<char> set = new HashSet<char>();
        int rk = -1;
        for(int i = 0; i < s.Length; i++)
        {
            if(i != 0)
                set.Remove(s[i - 1]);
            while(rk + 1 < s.Length && !set.Contains(s[rk + 1]))
            {
                rk++;
                set.Add(s[rk]);
            }
            res = res > rk - i + 1 ? res : rk - i + 1;
        }
        return res;
    }
}