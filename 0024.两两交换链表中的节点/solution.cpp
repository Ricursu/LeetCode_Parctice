/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr) return head;
        if(head->next == nullptr) return head;
        ListNode* result = new ListNode();
        ListNode* temp = new ListNode();
        temp->next = head;
        result = temp;
        while(temp->next != nullptr && temp->next->next != nullptr)
        {
            ListNode* tempptr = temp->next;
            ListNode* tempnn = temp->next->next;
            tempptr->next = tempnn->next;
            tempnn->next = tempptr;
            temp->next = tempnn;
            temp = tempptr;
        }
        return result->next;
    }
};