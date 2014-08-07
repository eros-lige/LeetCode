class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        
        vector< vector<int> > vec;
        if(numRows==0) return vec;
        vector<int> t;
        t.push_back(1);
        vec.push_back(t);
        for(int i=1;i<numRows;i++){
            vector <int> temp;
            temp.push_back(1);
            for(int j=0;j<vec[i-1].size()-1;j++){
                temp.push_back(vec[i-1][j]+vec[i-1][j+1]);
            }
            temp.push_back(1);
            vec.push_back(temp);
        }
        return vec;
    }
};