public class Trie {

    class TreeNode{
        public bool isWord;
        public TreeNode[] tree;

        public TreeNode()
        {
            isWord = false;
            tree = new TreeNode[26];
        }
    }

    TreeNode[] tree;

    /** Initialize your data structure here. */
    public Trie() {
        tree = new TreeNode[26];
    }
    
    /** Inserts a word into the trie. */
    public void Insert(string word) {
        if(tree[word[0] - 'a'] == null)
            tree[word[0] - 'a'] = new TreeNode();
        TreeNode inTree = tree[word[0] - 'a'];
        for(int i = 1; i < word.Length; i++)
        {
            if(inTree.tree[word[i] - 'a'] == null)
            {
                inTree.tree[word[i] - 'a'] = new TreeNode();
            }
            inTree = inTree.tree[word[i] - 'a'];
        }
        inTree.isWord = true;
    }
    
    /** Returns if the word is in the trie. */
    public bool Search(string word) {
        TreeNode t = tree[word[0] - 'a'];
        if(t == null)
            return false;
        for(int i = 1; i < word.Length; i++)
        {
            t = t.tree[word[i] - 'a'];
            if(t == null)
                return false;
        }
        if(t.isWord)
            return true;
        else
            return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    public bool StartsWith(string prefix) {
        TreeNode t = tree[prefix[0] - 'a'];
        if(t == null)
            return false;
        for(int i = 1; i < prefix.Length; i++)
        {
            t = t.tree[prefix[i] - 'a'];
            if(t == null)
                return false;
        }
        return true;
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.Insert(word);
 * bool param_2 = obj.Search(word);
 * bool param_3 = obj.StartsWith(prefix);
 */