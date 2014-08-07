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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode * p=head;
        if(p->val==p->next->val){
            p->next=p->next->next;
            ListNode * a=deleteDuplicates(p);
        }
        else{
            ListNode * a=deleteDuplicates(p->next);    
        }
        
        return head;
    }
};