public class Solution {
    public bool ContainsNearbyAlmostDuplicate(int[] nums, int k, int t) {
        if(nums.Length < 2 || k == 10000) return false;
        HashSet<int> set = new HashSet<int>();
        for(int i = 0; i < nums.Length; i++)
        {
            for(int j = i-k < 0 ? 0 : i-k ; j < i; j++)
            {
                long target = (long)nums[i]-(long)nums[j];
                target = target >= 0 ? target : -target;
                if(target <= t)
                {
                    Console.Write(i + "  " + j);
                    return true;
                }    
            }
        }
        return false;
    }
}