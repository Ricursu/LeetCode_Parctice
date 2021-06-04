
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }

        int sub = 0;
        ListNode* ta = headA;
        ListNode* tb = headB;
        bool isA = true;
        while(ta->next!=nullptr || tb->next!=nullptr)
        {
            if(ta->next!=nullptr && tb->next!=nullptr)
            {
                ta = ta->next;
                tb = tb->next;
            }
            else if(ta->next == nullptr)
            {
                tb=tb->next;
                sub++;
                isA=false;
            }
            else
            {
                ta=ta->next;
                sub++;
            }
        }
        if(ta!=tb)
            return nullptr;
        ta = headA;
        tb = headB;
        if(isA)
            while(sub--)
                ta = ta->next;
        else
            while(sub--)
                tb = tb->next;
        while(ta!=tb)
        {
            ta=ta->next;
            tb=tb->next;
        }
        return ta;
    }
};