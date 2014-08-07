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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if(head==NULL) return NULL;
        ListNode * p=head;
        while(p){
            if(n==0)
            break;
            p=p->next;
            n--;
        }
        if(p==NULL){
            head=head->next;
            return head;
        }
        
        ListNode * pre=head;
        while(p->next){
            p=p->next;
            pre=pre->next;
        }
        pre->next=pre->next->next;
        return head;
    }
};