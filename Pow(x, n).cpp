class Solution {
public:
    double pow(double x, int n) {
        double result=1.0;
        double pre=result;
        if(x==-1.0){
            return n%2==0?-x:x;
        }
        if(n==0) return 1.0;
        if(n>0){
            for(int i=0;i<n;i++){
                result*=x;
                if(pre==result)break;
                pre=result;
            }
            return result;    
        }
        else{
            for(int i=0;i<-n;i++){
                result/=x;
                if(pre==result)break;
                pre=result;
            }
            return result; 
        }
        
    }
};