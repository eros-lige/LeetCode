public class Solution {
    public void merge(int A[], int m, int B[], int n) {
		int i=m-1,j=n-1,k=m+n-1;
		
		for(;i=0&&j=0;k--){
			if(A[i]=B[j]){
				A[k]=A[i];
				i--;
			}
			else{
				A[k]=B[j];
				j--;
			}
		}
		for(;i=0;i--,k--){
			A[k]=A[i];
		}
		for(;j=0;j--,k--){
			A[k]=B[j];
		}
    }
}