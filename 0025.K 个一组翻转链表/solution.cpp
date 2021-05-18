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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1 || head == nullptr) return head;
        int length = 0;
        ListNode* headptr = head;
        while(headptr != nullptr)
        {
            length++;
            headptr = headptr->next;
        }
        headptr = new ListNode();
        headptr->next = head;
        ListNode* result = headptr;
        while(length >= k)
        {
            int t = k-1;
            ListNode* tail = headptr->next;
            while(t--)
            {
                ListNode* temp = tail->next;
                tail->next = temp->next;
                temp->next = headptr->next;
                headptr->next = temp;
            }
            headptr = tail;
            length = length - k;
        }

        return result->next;
    }
};