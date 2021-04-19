public class Solution {
    public bool IsPalindrome(int x) {
        if(x < 0) return false;
        string t = x.ToString();
        int l = 0, r = t.Length - 1;
        while(l < r)
         if(t[l++] != t[r--])
            return false;
        return true;
    }
}