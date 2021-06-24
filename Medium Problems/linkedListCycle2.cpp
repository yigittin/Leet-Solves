/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* res=head;        
        if(slow==nullptr||slow->next==nullptr){            
            return NULL;            
        }        
       
        
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                while(res!=slow){
                    slow=slow->next;
                    res=res->next;
                }                
                return res;               
            }            
        }
        return NULL;      
    }
};