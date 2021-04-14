class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int s = target - nums[i];
            if(m.count(s) != 0)
            {
                result.push_back(m[s]);
                result.push_back(i);
                return result;
            }
            m[nums[i]] = i;
        }
        return result;
    }
};