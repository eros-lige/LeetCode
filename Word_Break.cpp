class Solution {
public:
    int data[100000];
    bool wordBreak(string s, unordered_set<string> &dict) {
        for(int i=0;i<s.length();i++){
            data[i]=-1;
        }
        return wb(s,dict,0);
    }
    bool wb(string s,unordered_set<string> &dict,int begindex){
        if(data[begindex]!=-1) return data[begindex];
        if(s.length()<1){
            data[begindex]=1;
            return true;
        }
        if(s.length()==1){
            if(dict.find(s)!=dict.end()){
                data[begindex]=1;
                return true;
            }
            else{
                data[begindex]=0;
                return false;
            }
        }
        for(int i=1;i<=s.length();i++){
            if(dict.find(s.substr(0,i))!=dict.end()){
                if(i>=s.length()){
                    data[begindex]=1;
                    return true;
                }
                bool flag=wb(s.substr(i),dict,i);
                if(flag==true) {
                    data[begindex]=1;
                    return true;
                }
            }
        }
        data[begindex]=0;
        return false;
        
    }
};