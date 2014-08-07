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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        vector< vector<int> > vec;
        if(root==NULL) return vec;
        stack<TreeNode *> q1;
        stack<TreeNode *> q2;
        q1.push(root);
        while((!q1.empty())||(!q2.empty())){
            if(q1.empty()){
                vector<int> temp;
                while(!q2.empty()){
                    TreeNode * tnode=q2.top();
                    q2.pop();
                    if(tnode!=NULL){
                        temp.push_back(tnode->val);
                        q1.push(tnode->right);
                        q1.push(tnode->left);
                    }
                    
                }
                if(!temp.empty()){
                    vec.push_back(temp);    
                }
                
            }
            else{
                vector<int> temp;
                while(!q1.empty()){
                    TreeNode * tnode=q1.top();
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