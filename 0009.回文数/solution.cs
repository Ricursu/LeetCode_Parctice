public class Solution {
    public bool IsPalindrome(int x) {
        if(x < 0) return false;
        int res = 0;
        int t = x;
        while(t != 0)
        {
            res = res*10 + t%10;
            t = t / 10;
        }
        return x == res;
    }
}