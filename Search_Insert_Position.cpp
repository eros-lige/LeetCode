class Solution {
public
    int searchInsert(int A[], int n, int target) {
        if(A[n-1]==target) return n-1;
        if(targetA[n-1]) return n;
        if(targetA[0]) return 0;
        for(int i=0;in-1;i++){
           if(A[i]==target) return i;
           if(A[i]target&&targetA[i+1]){
               return i+1;
           }
        }
    }
};