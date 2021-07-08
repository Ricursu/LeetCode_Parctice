class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> s;
        int sNum = 0;
        int Num = 0;
        int len = nums.size();
        for(int i = 0; i < len; i++)
        { 
            if(s.count(nums[i]) == 0)
            {
                sNum += nums[i];
                s.insert(nums[i]);
            }
            Num += nums[i];
        }   
        vector<int> res(2);
        res[0] = Num - sNum;
        res[1] = len*(len+1)/2 - sNum;
        return res;
    }
};