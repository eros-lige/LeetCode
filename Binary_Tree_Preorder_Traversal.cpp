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
    vector<int> preorderTraversal(TreeNode *root) {
        if(root==NULL) return result;
        result.push_back(root->val);
        vector<int> a=preorderTraversal(root->left);
        vector<int> b=preorderTraversal(root->right);
        return result;
    }
};