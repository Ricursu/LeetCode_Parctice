class Solution {
public:
    double quick(double x, long long n)
    {
        if(n == 0) return 1.0;
        double y = quick(x, n/2);
        return n%2==0 ? y*y : y*y*x;
    }

    double myPow(double x, int n) {
        long long N = n;
        return n > 0 ? quick(x, N) : 1.0 / quick(x, N);
    }
};