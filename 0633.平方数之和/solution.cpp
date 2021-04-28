class Solution {
public:
    bool judgeSquareSum(int c) {
        long r = sqrt(c);
        long l = 0;
        while(l <= r)
        {
            if(r*r + l*l == c)
                return true;
            else if(r*r + l*l > c)
                r--;
            else
                l++;
        }
        return false;
    }
};