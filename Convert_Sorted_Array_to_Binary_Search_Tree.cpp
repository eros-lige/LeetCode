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
    TreeNode *sortedArrayToBST(vector<int> &num) {
        if(num.size()<1) return NULL;
        return satb(num,0,num.size()-1);
    }
    
    TreeNode * satb(vector<int> &num, int start , int end){
        if(start>end) return NULL;
        int middle=(start+end)/2;
        TreeNode * p=new TreeNode(num[middle]);
        p->left=satb(num,start,middle-1);
        p->right=satb(num,middle+1,end);
        
        return p;
        
        
    }
    
    
};