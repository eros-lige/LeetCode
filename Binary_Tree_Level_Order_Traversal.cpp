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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector< vector<int> > vec;
        if(root==NULL) return vec;
        queue<TreeNode *> q1;
        queue<TreeNode *> q2;
        q1.push(root);
        while((!q1.empty())||(!q2.empty())){
            if(q1.empty()){
                vector<int> temp;
                while(!q2.empty()){
                    TreeNode * tnode=q2.front();
                    q2.pop();
                    if(tnode!=NULL){
                        temp.push_back(tnode->val);
                        q1.push(tnode->left);
                        q1.push(tnode->right);
                    }
                    
                }
                if(!temp.empty()){
                    vec.push_back(temp);    
                }
                
            }
            else{
                vector<int> temp;
                while(!q1.empty()){
                    TreeNode * tnode=q1.front();
                    q1.pop();
                    if(tnode!=NULL){
                        temp.push_back(tnode->val);
                        q2.push(tnode->left);
                        q2.push(tnode->right);
                    }
                    
                }
                if(!temp.empty()){
                    vec.push_back(temp);    
                }
                
            }
            
        }
        return vec;
        
        
    }
};