class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1;
        vector<int> vec2;
        dfs(vec1, root1);
        dfs(vec2, root2);
        if(vec1.size() != vec2.size() || vec1.size() == 0) return false;
        for(int i = 0; i < vec1.size(); i++)
            if(vec1[i] != vec2[i]) return false;
        return true;
    }

    void dfs(vector<int>& vec, TreeNode* root)
    {
        if(root == nullptr) return ;
        if(root->left == nullptr && root->right == nullptr) 
        {
            vec.push_back(root->val);
            return ;
        }
        dfs(vec, root->left);
        dfs(vec, root->right);
    }
};