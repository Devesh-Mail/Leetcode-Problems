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
    public ListNode oddEvenList(ListNode head) {
        ListNode odd = new ListNode();
        ListNode even = new ListNode();
        ListNode es = even;
        ListNode os = odd;
        while (head != null) {
            odd.next = head;
            head = head.next;
            odd = odd.next;

            if (head != null) {
                even.next = head;
                head = head.next;
                even = even.next;
            }
        }
        odd.next = es.next;
        even.next = null;
        return os.next;
    }
}