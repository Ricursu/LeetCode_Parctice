class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.size() < 4) return res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i <= nums.size() - 4; i++)
        {
            if(i > 0 && nums[i] == nums[i-1])   continue;
            for(int j = i + 1; j <= nums.size() - 3; j++)
            {
                if(j > i + 1 && nums[j] == nums[j-1]) continue;
                int sum = nums[i] + nums[j];
                int l = j+1;
                int r = nums.size() - 1;
                while(r > l)
                {
                    if(sum + nums[l] + nums[r] == target)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                        res.push_back(temp);
                        while(l<r&&nums[l+1]==nums[l])      //确保nums[c] 改变了
        				    l++;
        				while(l<r&&nums[r-1]==nums[r])      //确保nums[d] 改变了
        				    r--;                        
                        l++;
                        r--;
                    }
                    else if(sum + nums[l] + nums[r] < target)
                        l++;
                    else
                        r--;
                }
            }
        }    
        return res;
    }
};