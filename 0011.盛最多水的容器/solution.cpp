class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int res = 0;
        while(i < j)
        {
            res = max( min(height[i], height[j])*(j - i), res);
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return res;
    }
};