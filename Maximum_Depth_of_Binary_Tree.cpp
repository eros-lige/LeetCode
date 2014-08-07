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
    int maxDepth(TreeNode *root) {
        if(root==NULL) return 0;
        int cleft=maxDepth(root->left);
        int cright=maxDepth(root->right);
        return cleft>cright?(cleft+1):(cright+1);
    }
};