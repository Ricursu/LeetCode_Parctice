class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }
        ListNode* ta = headA;
        ListNode* tb = headB;
        while(ta != tb)
        {
            ta = ta == nullptr ? headB : ta->next;
            tb = tb == nullptr ? headA : tb->next;
        }
        return ta;
    }
};