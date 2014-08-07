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
        while(p->left){
            TreeLinkNode * t=p;
            TreeLinkNode * pre=NULL;
            while(t){
                if(pre!=NULL) pre->right->next=t->left;
                t->left->next=t->right;
                pre=t;
                t=t->next;
            }
            pre->right->next=NULL;
            p=p->left;
        }
    }
};