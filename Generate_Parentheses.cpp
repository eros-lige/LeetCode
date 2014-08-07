class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        if(n==0) return result;
        if(n==1){
            result.push_back("()");
            return result;
        }
        vector<string> pre=generateParenthesis(n-1);
        
        for(int i=0;i<pre.size();i++){
            string t="("+pre[i]+")";
            if(find(result.begin(),result.end(),t)==result.end()){
                result.push_back(t);
            }
            for(int j=0;j<pre[i].length();j++){
                t=pre[i];
                t.insert(j,"()");
                if(find(result.begin(),result.end(),t)==result.end()){
                    result.push_back(t);
                }
            }
            
        }
        return result;
        
    }
};