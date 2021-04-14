/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        int num1 = 0, num2 = 0, carry = 0;
        ListNode head = new ListNode();
        ListNode current = head;
        while(l1 != null || l2 != null || carry != 0)
        {
            if(l1 == null)
                num1 = 0;
            else
            {
                num1 = l1.val;
                l1 = l1.next;
            }
            if(l2 == null)
                num2 = 0;
            else
            {
                num2 = l2.val;
                l2 = l2.next;
            }
            current.next = new ListNode((num1 + num2 + carry)%10);
            carry = (num1 + num2 + carry)/10;
            current = current.next;
        }
        return head.next;
    }
}