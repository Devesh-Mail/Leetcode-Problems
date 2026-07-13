/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null || k==0 || head.next==null)
            return head;
        int count=0;
        ListNode temp=head;
        while(temp!=null){
            temp=temp.next;
            count++;
        }
        k%=count;
        if(k==0)
            return head;
        ListNode sec=null;
        temp=head;
        for(int i=1;i<count-k;i++){
            temp=temp.next;
        }
        sec=temp.next;
        temp.next=null;
        temp=sec;
        while(temp.next!=null)
            temp=temp.next;
        temp.next=head;
        return sec;
    }
}