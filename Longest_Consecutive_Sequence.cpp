class Solution {
public
    int longestConsecutive(vectorint &num) {
        if(num.size()=0) return 0;
        sort(num.begin(),num.end());
        int maxlen=1;
        int currentlen=1;
        for(int i=0;inum.size()-1;i++){
            if(num[i]==num[i+1]) continue;
            if(num[i]+1==num[i+1]){
                currentlen++;
                if(currentlenmaxlen){
                    maxlen=currentlen;
                }
            }
            else{
                currentlen=1;
            }
            
        }
        return maxlen;
    }
};