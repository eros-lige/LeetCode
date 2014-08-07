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
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        int min=100000000;
        int flag=0;
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL){
                flag=1;
            }
        }
        if(flag==0) return NULL;
        if(lists.size()<1) return NULL;
        vector<ListNode *> newlist;
        int minindex=0;
        for(int i=0;i<lists.size();i++){
            if(lists[i]==NULL) continue;
            if(lists[i]->val<min){
                min=lists[i]->val;
                minindex=i;
            }
        }
        ListNode * p=lists[minindex];
        if(p->next==NULL){
            lists.erase(lists.begin()+minindex);
            p->next=mergeKLists(lists);
        }
        else{
            lists[minindex]=p->next;
            p->next=mergeKLists(lists);
        }
        return p;
        
        
    }
};