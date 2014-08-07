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
    bool hasPathSum(TreeNode *root, int sum) {
        if(root==NULL) return false;
        return hps(root,sum);
    }
    bool hps(TreeNode *root, int sum){
        if(root->left==NULL&&root->right==NULL&&root->val==sum) return true;
        bool lbool=false,rbool=false;
        if(root->left!=NULL) lbool=hps(root->left,sum-(root->val));
        if(root->right!=NULL) rbool=hps(root->right,sum-(root->val));
        return lbool|rbool;
    }
};