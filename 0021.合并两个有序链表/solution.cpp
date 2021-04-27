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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr && l2 == nullptr)  return l1;
        ListNode* res = new ListNode();
        ListNode* head = new ListNode();
        res->next = head;
        while(l1 != nullptr || l2 != nullptr)
        {
            int t;
            if(l1 == nullptr)
            {
                t = l2->val;
                l2 = l2->next;
            }    
            else if(l2 == nullptr)
            {
                t = l1->val;
                l1 = l1->next;
            }
            else
            {
                t = l1->val > l2->val ? l2->val : l1->val;
                if(t==l1->val)
                    l1 = l1->next;
                else
                    l2 = l2->next;
            }
            head->val = t;
            if(l1 != nullptr || l2 != nullptr)
            {
                head->next = new ListNode();
                head = head->next;
            }
        }
        return res->next;
    }
};