/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        ListNode slow=new ListNode();
        ListNode fast=new ListNode();
        slow=fast=head;

        while(fast!=null && fast.next!=null){
            fast=fast.next.next;
            slow=slow.next;
            if(slow==fast)
                break;
        }
        slow=head;
        while(fast!=null){
            if(slow==fast && head.next!=null)
                return fast;
            fast=fast.next;
            slow=slow.next; 
        }
        return null;
    }
}