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
    vector<int> postorderTraversal(TreeNode *root) {
        if(root==NULL) return result;
        vector<int> a = postorderTraversal(root->left);
        a = postorderTraversal(root->right);
        result.push_back(root->val);
        return result;
    }
};