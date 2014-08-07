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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        return bt(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1);
    }
    
    TreeNode * bt(vector<int> &inorder,int istart,int iend,vector<int> &preorder,int pstart,int pend ){
        if(inorder.size()<=0||preorder.size()<=0) return NULL;
        if(inorder.size()!=preorder.size()) return NULL;
        if(istart>iend||pstart>pend) return NULL;
        
        
        int index=-1;
        for(int i=istart;i<=iend;i++){
            if(inorder[i]==preorder[pstart]){
                index=i;
                break;
            }
        }
        
        TreeNode * root=new TreeNode(preorder[pstart]);
        int length=index-istart;
        root->left=bt(inorder,istart,index-1,preorder,pstart+1,pstart+length);
        root->right=bt(inorder,index+1,iend,preorder,pstart+length+1,pend);
        return root;
    }
};