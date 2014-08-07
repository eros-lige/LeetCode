class Solution {
public:
    void sortColors(int A[], int n) {
        int a0=0;
        int a1=0;
        int a2=0;
        for(int i=0;i<n;i++){
            if(A[i]==2){
                A[a2++]=2;
            }
            else if(A[i]==1){
                A[a2++]=2;
                A[a1++]=1;
            }
            else if(A[i]==0){
                A[a2++]=2;
                A[a1++]=1;
                A[a0++]=0;
            }
        }
    }
};