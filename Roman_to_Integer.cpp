class Solution {
public:
    int romanToInt(string s) {
        stack<int> st;
        int result=0;
        
        for(int i=0;i<s.length();i++){
            switch(s[i]){
                case 'I': st.push(1);break;
                case 'V': st.push(5);break;
                case 'X': st.push(10);break;
                case 'L': st.push(50);break;
                case 'C': st.push(100);break;
                case 'D': st.push(500);break;
                case 'M': st.push(1000);break;
            }
        }
        int pre=0;
        while(!st.empty()){
            int num=st.top();
            st.pop();
            if(num>=pre){
                result+=num;
            }
            else{
                result-=num;
            }
            pre=num;
        }
        return result;
    }
};