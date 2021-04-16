public class Solution {
    public int Reverse(int x) {
        int t = x;
        long res = 0;
        while( t != 0)
        {
            res = res *10 + t%10;
            t = t/10;
        }
        return (int)res == res ? res : 0;
    }
}