class Solution {
public:
    int data[1000][1000];
    int minPathSum(vector<vector<int> > &grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                data[i][j]=-1;
            }
        }
        
        return f(grid,grid.size()-1,grid[0].size()-1);
    }
    int f(vector<vector<int> > & grid ,int n, int m){
        if(data[n][m]!=-1)
            return data[n][m];
        
        if(n==0&&m==0){
            return grid[n][m];
        }
        
        if(n==0){
            return f(grid,n,m-1)+grid[n][m];
        }
        if(m==0){
            return f(grid,n-1,m)+grid[n][m];
        }
        
        int t1=f(grid,n-1,m);
        int t2=f(grid,n,m-1);
        data[n][m]=t1<t2?(t1+grid[n][m]):(t2+grid[n][m]);
        return data[n][m];
        
    }
};