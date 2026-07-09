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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd=new ListNode();
        ListNode* even=new ListNode();
        ListNode* es=new ListNode();
        es=even;
        ListNode* os=new ListNode();
        os=odd;
        while(head!=nullptr){
            odd->next=head;
            head=head->next;
            odd=odd->next;
            
            if(head!=nullptr){
                even->next=head;
                head=head->next;
                even=even->next;
            }
        }
        odd->next=es->next;
        even->next=nullptr;
        return os->next;
    }
};