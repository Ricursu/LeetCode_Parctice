class Solution {
public:
    int uniquePaths(int m, int n) {
        long long res = 1;
        for(int x = n, y = 1; y < m; y++,x++)
            res = res* x/y;
        return res;
    }
};