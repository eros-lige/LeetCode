class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        if(matrix.size()<1) return false;
        if(matrix[0].size()<1) return false;
        int n=matrix.size();
        int m=matrix[0].size();
        return biSearch(matrix,n,m,target,0,n*m-1);
        
    }
    bool biSearch(vector<vector<int> > &matrix, int n ,int m,int target, int start, int end){
        if(start>end) return false;
        
        int middle=(start+end)/2;
        int x=middle/m;
        int y=middle%m;
        if(matrix[x][y]==target) return true;
        if(target<matrix[x][y]) return biSearch(matrix,n,m,target,start,middle-1);
        if(target>matrix[x][y]) return biSearch(matrix,n,m,target,middle+1,end);
        
        
        
    }
};