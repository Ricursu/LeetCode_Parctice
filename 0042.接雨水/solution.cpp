class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() <= 0) return 0;
        int res = 0;
        int left = 0, right = height.size() - 1;
        int leftmax = height[left], rightmax = height[right];
        while(left < right)
        {
            leftmax = max(leftmax, height[left]);
            rightmax = max(rightmax, height[right]);
            if(height[left] < height[right])
            {
                res += leftmax - height[left];
                left++;    
            }
            else
            {
                res += rightmax - height[right];
                right--;
            }
        }
        return res;
    }
};