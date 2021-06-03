class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int res = 0;
        unordered_map<int, int> mp;
        int counter = 0;
        mp[counter] = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            counter += nums[i] ? 1 : -1;
            if(mp.count(counter))
            {
                int t = mp[counter];
                res = max(res, i - t);
            }
            else
                mp[counter] = i;
        }
        return res;
    }
};