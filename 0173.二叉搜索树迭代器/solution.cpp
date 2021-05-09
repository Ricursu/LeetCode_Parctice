
class BSTIterator {
    queue<int> sta;
public:
    BSTIterator(TreeNode* root) {
        dfs(root);
    }

    void dfs(TreeNode* root)
    {
        if(root == nullptr) return ;
        dfs(root->left);
        sta.push(root->val);
        dfs(root->right);
    }
    
    int next() {
        int t = sta.front();
        sta.pop();
        return t;
    }
    
    bool hasNext() {
        return !sta.empty();
    }
};