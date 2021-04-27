class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res = 0;
        dfs(root, low, high, res);
        return res;
    }
    void dfs(TreeNode* root, int low, int high, int& res)
    {
        if(root == nullptr) return ;
        if(root->val >= low && root->val <= high)
        {
            res += root->val;
            dfs(root->left, low, high, res);
            dfs(root->right, low, high, res);
        }
        else
        {
            if(root->val < low)
                dfs(root->right, low, high, res);
            if(root->val > high)
                dfs(root->left, low, high, res);
        }
    }
};