class Solution {
public:
    bool isValid(string s) {
        stack<char> sstack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                sstack.push(s[i]);
            }
            else{
                if(sstack.empty()){
                    return false;
                }
                char a=sstack.top();
                sstack.pop();
                if(a=='('&&s[i]==')'){
                    
                }else if(a=='['&&s[i]==']'){
                    
                }else if(a=='{'&&s[i]=='}'){
                    
                }
                else{
                    return false;
                }
            }
            
        }
        if(!sstack.empty()) return false;
        return true;
    }
};