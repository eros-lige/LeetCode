class Solution {
public:
    int a[200][200];
    int uniquePaths(int m, int n) {
        if(m==1||n==1) return 1;
        if(a[m][n]!=0) return a[m][n];
        a[m][n]=uniquePaths(m-1,n)+uniquePaths(m,n-1);
        return a[m][n];
    }
};