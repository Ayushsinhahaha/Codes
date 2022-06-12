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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *next=NULL;
        int c=0;
        int len=0;
        ListNode *ptr=head;
        while(ptr!=NULL){
            ptr=ptr->next;
            len++;
        }
        if(len<k)
            return head;
        while(curr!=NULL && c<k){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
           c++;
        }
        
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};