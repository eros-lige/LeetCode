class Solution {
public:
    bool isScramble(string s1, string s2) {
        
        if(s1.size()!=s2.size()) return false;
        if(s1==s2) return true;\
        int bitmap1[100]={0};
        int bitmap2[100]={0};
        for(int i=0;i<s1.size();i++){
            bitmap1[s1[i]-'a']++;
            bitmap2[s2[i]-'a']++;
        }
        for(int i=0;i<100;i++){
            if(bitmap1[i]!=bitmap2[i]) return false;
        }
        if(s1.size()<4) return true;
        
        for(int i=1;i<s1.size();i++){
            if(
                (isScramble(s1.substr(0,i),s2.substr(0,i))&&
                isScramble(s1.substr(i),s2.substr(i)))||
                (isScramble(s1.substr(0,i),s2.substr(s2.size()-i))&&
                isScramble(s1.substr(i),s2.substr(0,s2.size()-i))
                )
            )
                return true;
        }
        return false;
        
    }
};