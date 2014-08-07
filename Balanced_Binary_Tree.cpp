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
    vector<int> vec;
    bool isBalanced(TreeNode *root) {
        if(root==NULL) return true;
        int a=0;
        return  isb(root,a);
    }
    bool isb(TreeNode * root, int & depth){
        if(root==NULL) {return true;}
        int dleft=depth+1;
        int dright=depth+1;
        bool lf=isb(root->left,dleft);
        bool rf=isb(root->right,dright);
        depth=dleft>dright?dleft:dright;
        if(abs(dleft-dright)<=1&&lf&&rf) return true;
        else return false;
    }
    
};