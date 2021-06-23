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
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* nextptr ;
        ListNode* prev = NULL;
        while(curr!=NULL)
        {
           nextptr = curr->next;
           curr->next = prev;
           prev = curr;
           curr = nextptr;
         
        }
      return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode *fast=head;
        ListNode *slow=head;
        
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow=reverse(slow);
        
        while(head->next!=NULL && slow!=NULL)
        {
            if(head->val!=slow->val){
               return false;
            }
           head=head->next;
            slow=slow->next;
                
           
        }
        return true;
    }
};