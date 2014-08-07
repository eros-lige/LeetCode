class Solution {
public:
    vector<int> sqsubset(vector<int> S,int index){
        vector<int> result;
        for(int i=0;i<S.size();i++){
            if(index&1==1){
                result.push_back(S[i]);
            }
            index=index>>1;
        }
        return result;
    }
    
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int>> result;
        if(n==0||k==0) return result;
        vector<int> vec;
        for(int i=1;i<=n;i++) vec.push_back(i); 
        for(int i=0;i<pow(2.0,n);i++){
            vector<int> t=sqsubset(vec,i);
			
            if(t.size()==k){
				/*for(int j=0;j<t.size();j++){
					cout<<t[j]<<" ";
				}
				cout<<endl;*/
				result.push_back(t);
			}
        }
        return result;
    }
};