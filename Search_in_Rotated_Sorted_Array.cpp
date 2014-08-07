class Solution {
public:
    int search(int A[], int n, int target) {
        if(n<1) return -1;
        return biSearch(A,n,target,0,n-1);
    }
    int biSearch(int A[] ,int n, int target ,int start ,int end){
        if(start>end) return -1;
        int middle=(start+end)/2;
        if(A[middle]==target) return middle;
        
        if(A[start]<=A[middle]){
            if(target<A[middle]&&target>=A[start]) return biSearch(A,n,target,start,middle-1);
            else return biSearch(A,n,target,middle+1,end);
        }
        else{
            if(target>A[middle]&&target<=A[end]) return biSearch(A,n,target,middle+1,end);
            else return biSearch(A,n,target,start,middle-1);
            
        }
        
        
        
    }
    
};