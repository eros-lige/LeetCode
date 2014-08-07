class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        if(n==0) return 0;
        int i=0,j=0;
        int count=0;
        for(i=0,j=0;i<n;i++){
            if(elem==A[i]){
                count++;
                continue;
            }
            A[j++]=A[i];
        }
        return n-count;
    }
};