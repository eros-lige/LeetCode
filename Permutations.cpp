class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int>> vec;
        if(num.size()<1) return vec;
        sort(num.begin(),num.end());
        do{
            vec.push_back(num);
        }while(next_permutation(num.begin(),num.end()));
        
        return vec;
        
        
    }
};