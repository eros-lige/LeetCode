class Solution {
public:
    int data[10000];
    int climbStairs(int n) {
        if(data[n]!=0) return data[n];
        if(n==0) return 0;
        if(n==1) {data[1]=1;return 1;}
        if(n==2) {data[2]=2;return 2;}
        
        int n_1=climbStairs(n-1);
        int n_2=climbStairs(n-2);
        data[n]=n_1+n_2;
        return n_1+n_2;
    }
};