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
    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        vector<vector<int>> result;
        set<vector<int> > vecset;
        sort(S.begin(),S.end());
        for(int i=0;i<pow(2,S.size());i++){
            vecset.insert(sqsubset(S,i));
        }
        set< vector<int> >::iterator it1;
        for (it1 = vecset.begin(); it1 != vecset.end(); ++it1)    
        {
            result.push_back(*it1);
        }
        return result;
    }
};