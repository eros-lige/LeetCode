class Solution {
public:
    int sqrt(int x) {
        if(x==0) return 0;
        if(x<4) return 1;
        double x0=-1;
        double x1=(double)x/2;
        while(abs(x0-x1)>0.1){
            x0=x1;
            x1=(x1+x/x1)/2;
        }
        return x1<x0?x1:x0;
    }
};