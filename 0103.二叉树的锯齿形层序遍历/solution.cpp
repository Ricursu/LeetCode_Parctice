
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*> tempQueue;
        tempQueue.push(root);
        vector<vector<int>> res;
        if(root == nullptr) return res;
        TreeNode* head = root;
        bool isLeft = true;
        while(!tempQueue.empty())
        {
            int t = tempQueue.size();
            vector<int> temp;
            queue<TreeNode*> tempQ;
            while(t--)
            {
                temp.push_back(tempQueue.top()->val);
                if(isLeft)
                {
                    if(tempQueue.top()->left != nullptr) tempQ.push(tempQueue.top()->left);
                    if(tempQueue.top()->right != nullptr) tempQ.push(tempQueue.top()->right);
                }
                else
                {
                    if(tempQueue.top()->right != nullptr) tempQ.push(tempQueue.top()->right);
                    if(tempQueue.top()->left != nullptr) tempQ.push(tempQueue.top()->left);
                }
                tempQueue.pop();
            }
            isLeft = isLeft ^ true;
            t = tempQ.size();
            while(t--)
            {
                tempQueue.push(tempQ.front());
                tempQ.pop();
            }
            res.push_back(temp);
        }
        return res;
    }
};