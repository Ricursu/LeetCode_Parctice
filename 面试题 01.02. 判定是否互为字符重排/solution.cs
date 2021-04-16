public class Solution {
    public bool CheckPermutation(string s1, string s2) {
        int[] cont = new int[26];
        for(int i = 0; i < 26; i ++)
            cont[i] = 0;
        foreach(char c in s1)
            cont[c - 'a']++;
        foreach(char c in s2)
        {
            cont[c - 'a']--;
            if(cont[c - 'a'] < 0)
                return false;
        }
        return true;
    }
}