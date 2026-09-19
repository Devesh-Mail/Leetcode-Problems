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
    public ListNode deleteDuplicates(ListNode head) {
        ListNode temp=new ListNode(0,head);
        ListNode prev=temp;
        ListNode ans=prev;
        temp=temp.next;
        while(temp!=null && temp.next!=null){
            if(temp.val==temp.next.val){
                while(temp!=null && temp.next!=null && temp.val==temp.next.val){
                    temp=temp.next;
                }
                prev.next=temp.next;
            }else{
                prev=temp;
            }
            temp=temp.next;
        }
        return ans.next;
    }
}