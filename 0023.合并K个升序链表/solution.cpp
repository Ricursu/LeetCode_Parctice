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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* res;
        if(lists.size() == 0) return nullptr;
        if (lists.size() == 1) return lists[0];
        res = new ListNode();
        ListNode* tail = new ListNode();
        res->next = tail;
        while(true)
        {
            int idx = -1;
            int min = 99999;
            bool isNull = true;
            for(int i = 0; i < lists.size(); i++)
            {
                if(lists[i] != nullptr)
                {
                    isNull = false;
                    if(lists[i]->val < min)
                    {
                        min = lists[i]->val;
                        idx = i;
                    }
                }
            }
            if(isNull)
                break;
            tail->next = new ListNode();
            tail = tail->next;
            tail->val = min;
            lists[idx] = lists[idx]->next;
        }
        return res->next->next;
    }
};