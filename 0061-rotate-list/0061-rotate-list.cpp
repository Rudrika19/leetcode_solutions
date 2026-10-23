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
        if(!head|| !head->next){
            return head;
        }
        ListNode* prev=head,*curr=head;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(k>=count) k=k%count;
        while(k>0){
            curr=curr->next;
            k--;
        }
        while(curr->next!=NULL){
            prev=prev->next;
            curr=curr->next;
        }
        curr->next=head;
        head=prev->next;
        prev->next=NULL;
        return head;

        
    }
};