class Solution {
public:

    vector<int> sqsubset(vector<int> S,int index){
        vector<int> result;
        for(int i=0;i<S.size();i++){
            if(index%2==1){
                result.push_back(S[i]);
            }
            index=index/2;
        }
        return result;
    }
    vector<vector<int> > subsets(vector<int> &S) {
        vector<vector<int>> result;
        sort(S.begin(),S.end());
        for(int i=0;i<pow(2,S.size());i++){
            result.push_back(sqsubset(S,i));
        }
        return result;
    }
    
};