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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        
        ListNode* dup=head->next;
        ListNode* curr=head;
        ListNode* answer=head;
        
        while(dup!=NULL){
            int data=dup->val;
            if(curr->val==data){
                curr->next=curr->next->next;
                dup=dup->next;                
            }
            else{
               curr=curr->next;
               dup=dup->next;  
            }
           
        }
        return answer;
    }
};