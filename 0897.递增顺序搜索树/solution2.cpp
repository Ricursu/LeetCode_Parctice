
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        if(root == nullptr) return root;
        TreeNode* head = root;

        head = LeftRotate(head);
        TreeNode* temp = head;
        while(temp->right!= nullptr)
        {
            temp->right = LeftRotate(temp->right);
            temp = temp->right;
        }
        return head;
    }

    TreeNode* LeftRotate(TreeNode* head)
    {
        while(head->left != nullptr)
        {
            TreeNode* left = head->left;
            head->left = left->right;
            left->right = head;
            head = left;
        }
        return head;
    }
};