class Solution {
public:
    int a[200][200];
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        if(obstacleGrid.size()==0) return 0;
        return uniquePaths(obstacleGrid,obstacleGrid.size()-1,obstacleGrid[0].size()-1);
    }
    
    int uniquePaths(vector<vector<int> > &obstacleGrid, int m, int n) {
        if(obstacleGrid[m][n]==1) return 0;
        if(m==0&&n==0) return 1;
        if(a[m][n]!=0) return a[m][n];
        if(m==0){
            a[m][n]=uniquePaths(obstacleGrid,m,n-1);
            return a[m][n];
        }
        if(n==0){
            a[m][n]=uniquePaths(obstacleGrid,m-1,n);
            return a[m][n];
        }
        
        a[m][n]=uniquePaths(obstacleGrid,m-1,n)+uniquePaths(obstacleGrid,m,n-1);
        return a[m][n];
    }
};