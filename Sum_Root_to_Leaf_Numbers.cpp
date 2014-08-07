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
    vector< vector<int> > vec;
    int sumNumbers(TreeNode *root) {
        int sum=0;
        vector<int> t;
        dfs(root,t);
        for(int i=0;i<vec.size();i++){
            sum+=vec2int(vec[i]);
        }
        return sum;
        
    }
    int vec2int(vector<int> path){
        int result=0;
        for(int i=0;i<path.size();i++){
            result*=10;
            result+=path[i];
        }
        return result;
    }
    
    void dfs(TreeNode * root, vector<int> path){
        if(root==NULL) return;
        path.push_back(root->val);
        if(root->left==NULL&&root->right==NULL){
            vec.push_back(path);
            return;
        }
        dfs(root->left,path);
        dfs(root->right,path);
    }
    
};