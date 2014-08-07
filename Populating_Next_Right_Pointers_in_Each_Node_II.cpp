/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root==NULL) return;
        TreeLinkNode * p=root;
        while(p){
            TreeLinkNode * t=p;
            TreeLinkNode * pre=NULL;
            int flag=0;
            while(t){
                if(t->left!=NULL) {
                    if(flag==0){
                        p=t->left;
                        flag=1;
                    }
                    if(pre!=NULL){
                        pre->next=t->left;    
                    }
                    pre=t->left;
                }
                if(t->right!=NULL){
                    if(flag==0){
                        p=t->right;
                        flag=1;
                    }
                    if(pre!=NULL){
                        pre->next=t->right;    
                    }
                    pre=t->right;
                }
                t=t->next;
            }
            if(pre!=NULL){
                pre->next=NULL;    
            }
            
            if(flag==0) p=NULL;
        }
    }
};