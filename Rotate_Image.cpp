class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        vector< vector<int> > t=matrix;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                matrix[j][matrix.size()-i-1]=t[i][j];
            }
        }
    }
};