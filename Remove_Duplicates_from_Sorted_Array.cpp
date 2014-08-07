class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n<=1) return n;
        int j=1;
        for(int i=0;i<n-1;i++){
            if(A[i]!=A[i+1]){
                A[j++]=A[i+1];
            }
                
        }
        return j;
    }
};