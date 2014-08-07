class Solution {
public:
    int maxSubArray(int A[], int n) {
        int max=A[0];
        int currentSum=A[0];
        for(int i=1;i<n;i++){
            if(currentSum<=0)
                currentSum=A[i];
            else
                currentSum+=A[i];
            if(currentSum>max){
                max=currentSum;
            }
        }
        return max;
    }
};