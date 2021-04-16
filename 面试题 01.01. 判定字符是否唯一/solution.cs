public class Solution {
    public bool IsUnique(string astr) {
        HashSet<char> set =  new HashSet<char>();
        foreach(char c in astr)
        {
            if(set.Contains(c))
                return false;
            set.Add(c);
        }
        return true;
    }
}