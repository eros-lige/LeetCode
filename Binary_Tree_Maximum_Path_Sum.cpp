/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int max;
    int maxPathSum(TreeNode *root) {
        max=-1000000;
        mp(root);
        return max;
    }
    int maximum(int a,int b ,int c){
        if(a>b){
            if(a>c) return a;
        }
        else{
            if(b>c) return b;
        }
        return c;
    }
    int mp(TreeNode * root){
        if(root==NULL) return 0;
        int lv=mp(root->left);
        int rv=mp(root->right);
        if(lv<0)lv=0;
        if(rv<0)rv=0;
        if((lv+rv+root->val)>max){
            max=lv+rv+root->val;
        }
        return maximum(root->val,root->val+lv,root->val+rv);
    }
    
};