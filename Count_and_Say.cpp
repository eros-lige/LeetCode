class Solution {
public:
    string countAndSay(int n) {
        string str="";
        if(n<=0) return str;
        str+="1";
        for(int i=1;i<n;i++){
            str=update(str);
        }
        return str;
    }
    string update(string str){
        string result="";
        int count=0;
        char pre=str[0];
        for(int i=0;i<=str.length();i++){
            if(str[i]==pre){
                count++;
            }
            else{
                result+=count+'0';
                result+=pre;
                count=1;
                pre=str[i];
            }
        }
        return result;
    }
    
};