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
    vector<int> result;
    vector<int> inorderTraversal(TreeNode *root) {
        if(root==NULL) return result;
        vector<int> a=inorderTraversal(root->left);
        result.push_back(root->val);
        a=inorderTraversal(root->right);
        return result;
    }
};