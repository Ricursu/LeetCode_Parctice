
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* newNode = new ListNode();
        ListNode* newNode2;
        newNode->next = head;
        newNode2 = newNode;
        while(newNode2->next!=nullptr)
        {
            if(newNode2->next->val == val)
                newNode2->next = newNode2->next->next;
            else
                newNode2 = newNode2->next;
        }
        return newNode->next;
    }
};