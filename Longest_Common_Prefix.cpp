class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string result="";
        if(strs.size()<=0) return result;
        int min=strs[0].size();
        for(int i=1;i<strs.size();i++){
            if(min<strs[i].size()){
                min=strs[i].size();
            }
        }
        for(int i=0;i<min;i++){
            char t=strs[0][i];
            int flag=1;
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=t) {
                    flag=0;
                    break;
                }
            }
            if(flag){
                result+=t;
            }
            else{
                return result;
            }
        }
        return result;
        
    }
};