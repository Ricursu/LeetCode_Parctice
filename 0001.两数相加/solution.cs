public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> dic = new Dictionary<int, int>();
        int[] res = new int[2];
        for(int i = 0; i < nums.Length; i++)
        {
            if(dic.ContainsKey(target - nums[i]))
            {
                res[0] = dic[target - nums[i]];
                res[1] = i;
                return res;
            }
            dic.Add(nums[i], i);
        }
        return null;
    }
}