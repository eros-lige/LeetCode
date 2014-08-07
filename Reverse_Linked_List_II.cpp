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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        if(head==NULL){
            return NULL;
        }
        ListNode * p=head;
        ListNode * pre=head;
        stack<ListNode *> s;
        
        for(int i=1;i<m;i++){
            pre=p;
            p=p->next;
        }
        
        for(int i=m;i<=n;i++){
            s.push(p);
            p=p->next;
        }
        while(!s.empty()){
            ListNode * t=s.top();
            s.pop();
            if(m==1&&s.size()==n-m){
                head=t;
                pre=t;
            }
            else{
                pre->next=t;
                pre=t;    
            }
            
        }
        pre->next=p;
        return head;
        
        
        
    }
};