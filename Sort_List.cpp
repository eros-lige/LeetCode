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
    ListNode * sortmerge(ListNode * a,ListNode * b){
	ListNode * result=NULL;
	if(a==NULL)
		return b;
	else if(b==NULL)
		return a;
	if(a->val<=b->val){
		result = a;
		result->next=sortmerge(a->next,b);
	}
	else{
		result = b;
		result->next=sortmerge(a,b->next);
	}
	return result;

}

void split(ListNode * head,ListNode * &a,ListNode * &b){
	ListNode * fast;
	ListNode * slow;
	if(head == NULL || head->next ==NULL){
		a=head;
		b=NULL;
	}
	else{
		slow=head;
		fast=head->next;
		while(fast!=NULL){
			fast=fast->next;
			if(fast!=NULL){
				slow=slow->next;
				fast=fast->next;
			}
		}
		a=head;
		b=slow->next;
		slow->next=NULL;


	}
}

ListNode *sortList(ListNode * &head) {
	ListNode * a=NULL;
	ListNode * b=NULL;
	if(head==NULL||head->next==NULL){
		return head;
	}
	split(head,a,b);
	ListNode * t1=sortList(a);
	ListNode * t2=sortList(b);
	head= sortmerge(a,b);
	return head;
}
};