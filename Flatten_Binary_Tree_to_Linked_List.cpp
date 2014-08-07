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
    void flatten(TreeNode *root) {
        if(root==NULL) return;
        stack<TreeNode *> st;
        stack<TreeNode *> pre;
        
        pre.push(root);
        while(!pre.empty()){
            
            TreeNode * temp=pre.top();
            pre.pop();
            st.push(temp);
            if(temp->right!=NULL){
                pre.push(temp->right);
            }
            if(temp->left!=NULL){
                pre.push(temp->left);
            }
            
        }
        
       root=st.top();
        st.pop();
        root->left=NULL;
        root->right=NULL;
        while(!st.empty()){
            TreeNode * temp=st.top();
            st.pop();
            temp->left=NULL;
            temp->right=root;
            root=temp;
        }
        
    }
};