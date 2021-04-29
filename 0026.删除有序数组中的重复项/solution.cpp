class Solution {
public
    int removeDuplicates(vectorint& nums) {
        int count = 0;
        stackint s;
        for(int i = 0; i  nums.size(); i++)
        {
            if(s.empty()  s.top() != nums[i])
            {
                s.push(nums[i]);
                count++;
            }
        }
        for(int i = count - 1; i = 0; i--)
        {
            nums[i] = s.top();
            s.pop();
        }
        return count;
    }
};