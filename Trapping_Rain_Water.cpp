class Solution {
public:
    int trap(int A[], int n) {
        if(n<=2) return 0;
        int * left=new int[n];
        for(int i=0;i<n;i++){
            left[i]=0;
        }
        int max=A[0];
        for(int i=1;i<n-1;i++){
            left[i]=max;
            if(A[i]>max) max=A[i];
        }
        max=A[n-1];
        int num=0;
        for(int i=n-2;i>0;i--){
            int leftmax=left[i];
            int rightmax=max;
            
            if(min(leftmax,rightmax)>A[i]){
                num+=min(leftmax,rightmax)-A[i];
            }
            
            if(A[i]>max) max=A[i];
        }
        
        return num;
        
    }
};