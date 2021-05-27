class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = 0;
        int temp = x^y;
        while(temp)
        {
            if(temp%2!=0) res++;
            temp = temp >> 1;
        }
        return res;
    }
};