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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode*head=NULL;
       ListNode*temp=NULL;
        while(list1!=NULL&&list2!=NULL){
            ListNode* newN=NULL;
            if(list1->val <= list2->val){
newN=new ListNode(list1->val);
list1=list1->next;
            }
            else{
                newN=new ListNode(list2->val);
                list2=list2->next;
            }
            if(head==NULL){
                head=newN;
                temp=newN;
            }
            else{
                temp->next=newN;
                temp=newN;
            }
        }
        while(list1!=NULL){
            ListNode* newN =new ListNode(list1->val);
            temp->next=newN;
            temp=newN;
            list1=list1->next;
        }
        while(list2!=NULL)
        {
            ListNode* newN = new ListNode(list2->val);
            temp->next=newN;
            temp=newN;
            list2=list2->next;
        }
        return head;

        }
};