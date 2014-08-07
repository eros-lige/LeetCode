class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n<=1) return n;
        int j=1;
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(flag==1&&A[i]==A[i+1]) continue;
            if(A[i]!=A[i+1]) flag=0;
            else flag=1;
            
            A[j++]=A[i+1];
                
        }
        return j;
    }
};