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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        ListNode*prev;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        
        int r=cnt-n;
        if(r==0 && head->next==NULL){
            return NULL;
        }
        if(r==0 && head->next!=NULL){
            ListNode*temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        int k=0;
        temp=head;
        while(temp!=NULL){
            if(k==r){
                prev->next=temp->next;
                delete temp;
                break;
            }
            k++;
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};