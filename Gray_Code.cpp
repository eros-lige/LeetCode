class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> vec;
        for(int i=0;i<pow(2,n);i++){
            int num=gc(i);
            vec.push_back(num);
        }
        return vec;
    }
    
    int gc(int n){
        stack<int> st;
        while(n!=0){
            st.push(n&1);
            n=n>>1;
        }
        int pre=0;
        int result=0;
        while(!st.empty()){
            result=result<<1;
            int now=st.top();
            st.pop();
            result=result|(now^pre);
            pre=now;
        }
        return result;
    }
};