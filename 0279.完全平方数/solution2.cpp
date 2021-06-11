class Solution {
public:
    bool isSqr(int j)
    {
        int y = sqrt(j);
        return y*y == j;
    }

    bool isTril(int n)
    {
        int t = n;
        while(t%4 == 0) t = t/4;
        return t%8 == 7;
    }

    int numSquares(int n) {
        if(isSqr(n)) return 1;
        if(isTril(n)) return 4;
        for(int i = 1; i*i <= n; i++)
        {
            int j = n - i*i;
            if(isSqr(j))    return 2;
        }
        return 3;
    }
};