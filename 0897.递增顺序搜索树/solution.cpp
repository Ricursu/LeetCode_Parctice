class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        if(root == nullptr) return root;
        TreeNode* head = new TreeNode();
        vector<int> vec;
        DFS(root, vec);
        TreeNode* t = head;
        int i = 0;
        while(i < vec.size())
        {
            t->val = vec[i++];
            if(i < vec.size())
            {
                t->right = new TreeNode();
                t = t->right;
            }
        }
        return head;
    }

    void DFS(TreeNode* root, vector<int>& nums)
    {
        if(root == nullptr)    return;
        DFS(root->left, nums);
        nums.push_back(root->val);
        DFS(root->right, nums);
    }
};