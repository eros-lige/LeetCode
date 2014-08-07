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
    vector<vector<int> > vec;
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<int> path;
        ps(root,sum,path);
        return vec;
        
    }
    
    void ps(TreeNode * root, int sum, vector<int> path){
        if(root==NULL) return;
        
        path.push_back(root->val);
        if(root->left==NULL&&root->right==NULL&&root->val==sum){
            vec.push_back(path);
            return;
        }
        ps(root->left,sum-root->val,path);
        ps(root->right,sum-root->val,path);
        
    }
    
};