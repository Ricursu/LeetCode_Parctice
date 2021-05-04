
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* left = head;
        while(left != nullptr)
        {
            if(left->next != nullptr && left->next->val == left->val)
            {
                left->next = left->next->next;
                continue;
            }
            left = left->next;
        }
        return head;
    }
};