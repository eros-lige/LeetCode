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
    ListNode *insertionSortList(ListNode *head) {
	if(head==NULL||head->next==NULL) return head;
	ListNode * p=head->next;
	ListNode * pre=head;
	ListNode * pnext=NULL;
	int i=0;
	while(p){
		ListNode * ptr=head;
		ListNode * ptrpre=NULL;
		int j=0;
		while(ptr!=p){
			if(ptr->val>p->val){
				pre->next=p->next;
				p->next=ptr;
				if(ptrpre!=NULL){
					ptrpre->next=p;	
				}
				else{
					head=p;
				}
				//print(head);
				p=pre;
				continue;
			}
			ptrpre=ptr;
			ptr=ptr->next;
			//cout<<i<<" "<<j<<endl;
			j++;
		}
		pre=p;
		p=p->next;
		i++;
	}
	return head;
}

};