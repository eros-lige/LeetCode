class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        if(triangle.size()<=0) return 0;
        if(triangle.size()==1) return triangle[0][0];
        for(int i=1;i<triangle.size();i++){
            triangle[i][0]+=triangle[i-1][0];
            triangle[i][triangle[i].size()-1]+=triangle[i-1][triangle[i-1].size()-1];
            for(int j=1;j<triangle[i].size()-1;j++){
                triangle[i][j]+=min(triangle[i-1][j-1],triangle[i-1][j]);
            }
        }
        int min=triangle[triangle.size()-1][0];
        for(int i=1;i<triangle[triangle.size()-1].size();i++){
            if(triangle[triangle.size()-1][i]<min){
                min=triangle[triangle.size()-1][i];
            }
        }
        return min;
        
    }
};