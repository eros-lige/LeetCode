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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        return bt(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
        
    }
    TreeNode * bt(vector<int> &inorder,int istart,int iend,vector<int> &postorder,int pstart,int pend ){
        if(inorder.size()<=0||postorder.size()<=0) return NULL;
        if(inorder.size()!=postorder.size()) return NULL;
        if(istart>iend||pstart>pend) return NULL;
        
        //if(istart==iend||pstart==pend) return new TreeNode(inorder[istart]);
        //vector<int>::iterator it=find(inorder.begin()+istart,inorder.begin()+iend-istart+1,postorder[pend]);
        //int index=distance(inorder.begin(),it);
        int index=-1;
        for(int i=istart;i<=iend;i++){
            if(inorder[i]==postorder[pend]){
                index=i;
                break;
            }
        }
        
        TreeNode * root=new TreeNode(postorder[pend]);
        int length=index-istart;
        root->left=bt(inorder,istart,index-1,postorder,pstart,pstart+length-1);
        root->right=bt(inorder,index+1,iend,postorder,pstart+length,pend-1);
        return root;
    }
    
};