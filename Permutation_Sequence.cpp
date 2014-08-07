class Solution {
public:
    
    int factorial(int n){
        int result=1;
        for(int i=1;i<=n;i++)
            result*=i;
        return result;
    }
    int bitmap[11];
    string getPermutation(int n, int k) {
        if(n==0) return "";
		int i=0;
        for(i=1;i<=n;i++){
            bitmap[i]=1;
        }
        string str;
        for(i=n;i>=1;i--){
            int t=ceil((double)k/(double)factorial(i-1));
			//cout<<t<<endl;
            int j=0;
            int count=0;
            for(j=1;j<=n;j++){
                if(bitmap[j]!=0) count++;
                if(t==count) break;
            }
            str+=j+'0';
			//cout<<str.c_str()<<endl;
            bitmap[j]=0;
            k=k%factorial(i-1);
			if(k==0) k=factorial(i-1);
        }
        
        return str;
        
    }
};