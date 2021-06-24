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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res=l1;
        ListNode* head1=l1;
        ListNode* head2=l2;
        
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1==NULL&&l2==NULL)
            return l1;
        if(l1->val>l2->val)
            res=l2;
        ListNode* sol=res;
        while(res!=NULL&&head1!=NULL&&head2!=NULL){
            ListNode* tmp=res;  
            
            if(head1->val>head2->val){
                tmp=head2; 
                head2=head2->next;
            }
            else{
                tmp=head1;
                head1=head1->next;
            }              
            res->next=tmp;
            res=res->next;
        }
        if(head2!=NULL)
            res->next=head2;
        if(head1!=NULL)
            res->next=head1;
        return sol;
    }
};