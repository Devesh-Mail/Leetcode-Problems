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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp=head;
        int N=0;
        while(temp!=NULL){
            N++;
            temp=temp->next;
        }
        if(N==0)
            return NULL;
        ListNode* sec=NULL;
        temp=head;
        k%=N;
        for(int i=1;i<N-k;i++){
            temp=temp->next;
        }
        sec=temp->next;
        temp->next=NULL;
        temp=sec;
        while(temp!=nullptr && temp->next!=NULL){
            temp=temp->next;
        }
        if(temp!=nullptr){
            temp->next=head;
        }else{
            return head;
        }
        return sec;
    }
};